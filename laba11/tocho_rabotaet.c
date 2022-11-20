#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef enum{
 status_zero,   //0
 status_first,  // 1
 status_second, // 2
 status_third,  // 3
 status_fourth  // 4

}status;

//для нормального функционирования нашего конечного аппарата нам потребуются:
// проверки на всевозможные разделители
int is_it_lda(char c){
  if ( c == ' ')
    return 1;
  else
    return 0;

}

void test_lda(){
    char c=' '; //1 test - correct +
    assert(is_it_lda(c)==1);
    c='r'; // 2 test - incorrect +
    assert(is_it_lda(c)==0);
    c=EOF; // 3 test - EOF +
    assert(is_it_lda(c)==0);


}


int is_it_cmma(char c){
   if ( c == ',')
    return 1;
   else
    return 0;

}

void test_cmma(){
   char c=','; //1 test - correct +
    assert(is_it_cmma(c)==1);
    c='r'; // 2 test - incorrect +
    assert(is_it_cmma(c)==0);
    c=EOF; // 3 test - EOF +
    assert(is_it_cmma(c)==0);

}

int is_it_tab(char c){
   if ( c == '\t')
    return 1;
   else
    return 0;

}

void test_tab(){
    char c='\t'; //1 test - correct +
    assert(is_it_tab(c)==1);
    c='r'; // 2 test - incorrect +
    assert(is_it_tab(c)==0);
    c=EOF; // 3 test - EOF +
    assert(is_it_tab(c)==0);


}
int is_it_n(char c){
   if ( c == '\n')
    return 1;
   else
    return 0;

}

void test_n(){
    char c='\n'; //1 test - correct +
    assert(is_it_n(c)==1);
    c='\t'; // 2 test - incorrect +
    assert(is_it_n(c)==0);
    c=EOF; // 3 test - EOF +
    assert(is_it_n(c)==0);


}
int is_it_num_9(char c ){
   if(c >= '0'&&c <= '8')
    return 1;
   else
    return 0;

}
int is_it_plus_or_minus(char c){
    if( c == '+' || c == '-')
        return 1;
    else
        return 0;


}
void test_is_it_num_9(){
    char c='0'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='1'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='2'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='3'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='4'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='5'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='6'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='7'; //1 test - correct +
    assert(is_it_num_9(c)==1);
     c='8'; //1 test - correct +
    assert(is_it_num_9(c)==1);
    c='9'; // 2 test - incorrect +
    assert(is_it_num_9(c)==0);
    c='\t'; // 3 test - incorrect +
    assert(is_it_num_9(c)==0);
    c=EOF; // 4 test - EOF +
    assert(is_it_num_9(c)==0);

}
void test_is_it_pm(){
    char c='+';
    assert(is_it_plus_or_minus(c)==1);//1 test -correct +;
     c='-';
    assert(is_it_plus_or_minus(c)==1);//1 test -correct +;
     c='r';
    assert(is_it_plus_or_minus(c)==0);//2 test -incorrect +;
     c=EOF;
    assert(is_it_plus_or_minus(c)==0);//3 test -EOF +;
}
int numeri (char a, char b){
    if(is_it_num_9(a)&&is_it_num_9(b)){


    switch(a){
        case '1':
            printf("dici");
        break;
        case '2':
            printf("vent");
        break;
        case '3':
            printf("trent");
        break;
        case '4':
            printf("quarant");
        break;
        case '5':
            printf("cinquant");
        break;
        case '6':
            printf("sessant");
        break;
        case '7':
            printf("settant");
        break;
        default:
            return 0;
        break;


    }
    switch(b){
        case '0':
            printf("a\n");
        break;
        case '1':
            printf("uno\n");
        break;
        case '2':
            printf("adue\n");
        break;
        case '3':
            printf("atre'\n");
        break;
        case '4':
            printf("aquattro\n");
        break;
        case '5':
            printf("acinque\n");
        break;
        case '6':
            printf("asei\n");
        break;
        case '7':
            printf("asettant\n");
        break;
        case '8':
            printf("otto\n");
        break;
        default:
            return 0;
        break;
    }
    return 1;
    }
    else{
        return 0;
    }
}
void test_numeri(){
    char a='4',b='0';
    assert(numeri(a,b)==1);
     a='r',b='8';
    assert(numeri(a,b)==0);
    a='7',b='3';
    assert(numeri(a,b)==1);

}
int main()
{   status stateus=status_zero;
    char c=' ',a=' ',b=' ';
    int flag=0;//счетчик + и -
    test_lda();
    test_cmma();
    test_tab();
    test_is_it_num_9();
    test_n();
    test_is_it_pm();
   // test_numeri(); //коментарий, ибо мешает корректной работе - выводит результат тестирования на стандартный поток

    while((c=getchar())!=EOF){ // условие завершения работы алгоритма
           switch(stateus){
               //______________________________________________________________________
           case status_zero:
            if (is_it_lda(c)||is_it_n(c)||is_it_tab(c)||is_it_cmma(c)){
                    stateus =status_first;
            }
            break;
            //______________________________________________________________________

           case status_first:
            if(is_it_num_9(c)&&c!='0'&&c!='8'){
                a=c;
                stateus=status_second;
                flag=0;

            }
            else if (is_it_num_9(c)&&(c=='0'||c=='8')){
                stateus = status_zero;
                flag=0;
            }
            else if(is_it_plus_or_minus(c)&&flag==0){
                flag=1;
            }
            else if(is_it_plus_or_minus(c)&&flag==1){
                stateus =status_zero;
                flag=0;
            }
            else if (is_it_lda(c)||is_it_n(c)||is_it_tab(c)||is_it_cmma(c)){
                flag=0;
            }
            else {
                stateus = status_zero;
                flag=0;
            }
            break;
            //______________________________________________________________________
           case status_second:
            if(is_it_num_9(c)&& !(a=='1'&&c<'7') && !(a=='7'&&c>'7')){
                    b=c;
                    stateus=status_third;
            }
            else
                stateus=status_zero;
            break;
            //______________________________________________________________________
           case status_third:
            if (is_it_lda(c)||is_it_n(c)||is_it_tab(c)||is_it_cmma(c)){
                    stateus =status_fourth;
                    numeri(a,b);
                    a=' ';
                    b=' ';
            }
            else
                stateus=status_zero;
            break;
            //______________________________________________________________________
           case status_fourth:
            if(is_it_num_9(c)&&c!='0'&&c!='8'){
                a=c;
                stateus=status_second;
                flag=0;

            }
            else if (is_it_num_9(c)&&(c=='0'||c=='8')){
                stateus = status_zero;
                flag=0;
            }
            else if(is_it_plus_or_minus(c)&&flag==0){
                flag=1;
                stateus =status_first;
            }
            else if(is_it_plus_or_minus(c)&&flag==1){
                stateus =status_zero;
                flag=0;
            }
            else if (is_it_lda(c)||is_it_n(c)||is_it_tab(c)||is_it_cmma(c)){
                flag=0;
                stateus =status_first;
            }
            else{
                flag=0;
                stateus =status_zero;
            }
            break;




           }
    }
    if(stateus==status_third){
        numeri(a,b);
        stateus=status_fourth;
    }
    return 0;
}

