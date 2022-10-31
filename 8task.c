#include <stdio.h>

int main(){
long long a=1,g=1,k=1,r=0,s26=0,s13=0,s2=0,s0=0;
scanf("%lld",&a);
for(long long y=0;y<a;y++){
scanf("%lld",&g);
if(g%26==0){s26++;}//number of  chislo %26
else if(g%13==0){s13++;}//%13
else if(g%2==0){s2++;}//%2
else s0++;}//ne dekitsa na netriv deliteli
// magic formul= s26*(s2+s13+so)+s13*s2;
long long magic_formul= s26*(s2+s13+s0+(s26-1))+s13*s2;//dana IIsusom
printf("%lld\n",magic_formul);


return 0;



}

