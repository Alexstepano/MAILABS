#include <stdio.h>
#include <locale.h>
 
 
const int i0=6;
const int jp0=27;
const int l0=-15;
 
int mod(int y,int md){
 
  return ( y % md + md) % md;
 
}
// функция mod находит modulo для целого числа y по целому числу md
int min_custom(int first_num,int second_num){
  if(first_num<second_num)
    return first_num;
  else
    return second_num;
 
}
//функция min_custom находит минимальное из 2 целых чисел
int max_custom(int first_num,int second_num){
  if(first_num<second_num)
    return second_num;
  else
    return first_num;
 
}
//функция max_custom находит максимальное из 2 целых чисел
int main(){
 
int i=i0,j=jp0,l=l0,ik1=0,jk1=0,lk1=0;
setlocale(LC_ALL, "Rus");//включим русский язык
for(  int k=0; k<50; k++  ){
 
  ik1=mod( ( (i*i*i) - (j*j*j) + (l*l*l) - k) , 20);
  jk1=mod( min_custom( (i*j*j) - k, min_custom( (i*i*l) -k
                ,(l*l*j) -k)) , 30 );
  lk1=mod( max_custom( (i*j*j) - k, max_custom( (i*i*l) -k
                ,(l*l*j) -k)) , 30 );
 
  i=ik1;
  j=jk1;
  l=lk1;
  if ( ( (i+10) * (i+10) +(j+10)*(j+10) <=100 )&&
  ( (i+20) * (i+20) +(j+20)*(j+20) <=100 )){
 
        printf("точка достигнет лунку на шаге под номером %d, переменные при этом приняли значения : i=%d, j=%d,  l=%d  \n",k,i,j,l );
        return 0; //зачем выходить из цикла, если можно вернуть значение 0 и убить процесс?
 
  }
    }
printf("точка не достигается,к сожалению,переменные при этом приняли значения : i=%d, j=%d,  l=%d \n",i,j,l);
return 0;
}
