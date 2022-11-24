#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
int64_t letter_or_not(char a){

    if(( (int64_t)a >='a' && (int64_t)a<='z') || ( (int64_t)a >='A' && (int64_t)a<='Z')){
        return 1;
    }
    else
    {
        return 0;
    }

}
uint64_t is_it_vowel(uint64_t set_input){   //маске со всеми гласными соответствует число 17842449( сама маска - 01000100000100000100010001)
    uint64_t set_mask=17842449;
    if((set_input&set_mask)){
        return 1;
    }
    else
    {
        return 0;
    }

}
uint64_t letter_to_set(char inp_a){

    return 1u<<(inp_a - 'a');

}
void test_to_set(){
    char c='a';
    assert(letter_to_set(c)==1);
    c='b';
    assert(letter_to_set(c)==2);
    c='c';
    assert(letter_to_set(c)==4);
    c='z'; //как можно заметить set(a(i)) = 2^(i-1), где i - номер буквы. z=2^25;
    assert(letter_to_set(c)==33554432);


}
void test_letter_or_not(){
    char c='a';
    assert(letter_or_not(c)==1);
     c='A';
    assert(letter_or_not(c)==1);
    c='o';
    assert(letter_or_not(c)==1);
    c='U';
    assert(letter_or_not(c)==1);
    c='0';
    assert(letter_or_not(c)==0);
    c=EOF;
    assert(letter_or_not(c)==0);
    c='\n';
    assert(letter_or_not(c)==0);

}

void test_is_it_vowel(){
    uint64_t c =1; //a
    assert(is_it_vowel(c)==1);
    c=16777216;//y
    assert(is_it_vowel(c)==1);
    c=4;
    assert(is_it_vowel(c)==0);
    c=33554432;
    assert(is_it_vowel(c)==0);


}
int64_t is_it_lda(char c){
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


int64_t  is_it_cmma(char c){
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

int64_t  is_it_tab(char c){
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
int64_t  is_it_n(char c){
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
char A_to_a(char a){
    int64_t y=(int64_t)a;
    if(y >='A' && y<='Z'){
        return (char)(y-'A'+'a');
    }
    else return a;
}
void test_A_to_a(){
    char c='A';
    assert(A_to_a(c)=='a');
    c='g';
    assert(A_to_a(c)=='g');
    c='P';
     assert(A_to_a(c)=='p');




}
int main()
{

    test_lda();
    test_cmma();
    test_tab();
    test_n();
    test_to_set();
    test_letter_or_not();
    test_is_it_vowel();
    test_A_to_a();

    int64_t solution=0,flag=0;
    char a=' ',b=' ';

    while((a=getchar())!=EOF){
            if(flag==0){
                if (letter_or_not(a)){
                    if (is_it_vowel(letter_to_set(a))){
                            flag=1;
                    }
                    else flag=2;
                }
                else if (is_it_cmma(a)||is_it_lda(a)||is_it_n(a)||is_it_tab(a)){
                    flag=0;
                }
                else{
                    flag=2;
                }

            }
            else if (flag==1){
                if (is_it_cmma(a)||is_it_lda(a)||is_it_n(a)||is_it_tab(a)){
                        if (letter_or_not(b)){
                            if (is_it_vowel(letter_to_set(b))){
                                    solution=1;
                           }
                           else
                            flag =0;

                       }
                       else
                        flag=0;

            }
            else
                flag=1;

         }
         else if(flag==2){
            if (is_it_cmma(a)||is_it_lda(a)||is_it_n(a)||is_it_tab(a)){
                    flag=0;
         }
         else
            flag=2;
         }
      if(flag==1){
        b=a;
      }
    }
    if(flag==1){
        if (letter_or_not(b)){
            if (is_it_vowel(letter_to_set(b))){
                                    solution=1;
            }
            else
                flag =0;

        }
        else
          flag=0;
    }
    if( solution){
        printf("A required word is in this sequence\n");
    }
    else
        printf("A required word isn't in this sequence\n");








    return 0;
}
