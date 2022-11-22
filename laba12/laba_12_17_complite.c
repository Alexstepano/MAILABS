#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
int64_t swap_last_first( int64_t a){
    int64_t b=0,c=0,d=0,k=1,sing=1;
    if(a<0){
        sing=-1;
        a=-a;
    }
    c=a%10;
    a=a/10;
    while(a>0){
        d+=k*(b);
        k*=10;
        b=a%10;
        a=a/10;
    }
    return sing*(c*k+d+b);
}
void test_swap_last_first(){
    int64_t g=123456789;
    assert(swap_last_first(g)==923456781);
    g=0;
    assert(swap_last_first(g)==0);
    g=-1;
    assert(swap_last_first(g)==-1);
    g=-5675869;
    assert(swap_last_first(g)==-9675865);
    g=9223372036854775807;
    assert(swap_last_first(g)==7223372036854775809);
    g=-9223372036854775807;
    assert(swap_last_first(g)==-7223372036854775809);


}



int main()
{   int64_t a=0,b=0,c=0,d=0,k=1;
    test_swap_last_first();
    printf("Enter initial number:\n");
    scanf("%lld",&a);
    printf("Your answer here: %lld \n", swap_last_first(a));
    return 0;
}
