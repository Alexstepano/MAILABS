#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <assert.h>
#include <stdint.h>
double Eps(){
    double epsilon=1.0;
    while(1.0+(epsilon/2.0)!=1.0){
        epsilon/=2.0;
    }
return epsilon;
}
void TEST_EPS(){
assert(Eps()<=__DBL_EPSILON__);
}
double new_elementus(double x,int n){
return x*x/((2*n-2)*(2*n-1));
}


int main()
{   TEST_EPS();
    double epsilon=Eps();
    printf("Mashine epsilon = %.16e\n",epsilon);
    double a=0;
    double b=1;
    double x=0;
    double ans=0;
    double normal_function=0;
    double cur=0;
    int k=0;
    int n=0;
    scanf("%d%d",&n,&k);
    assert(n!=0);
    assert(k<=16);
    assert(n<75||k!=16);
    double rate_error=epsilon*pow(10,16-k);


    double delta=(b-a)/(double)n;

printf("rate_error_max=%.16f|\n",rate_error);
printf("______________________________________________________________________________\n");
printf("x                 |sh(x)mine          |sh(x)libs          |number_of_iteration\n");
    for(int i=1;i<=n+1;i++){

           normal_function=sinh(x);
           ans=x;
           cur=x;
           double last=x;
           int num_of_iter=2;

           while(fabs(normal_function-ans)>rate_error){
            last=cur;
            cur=last*new_elementus(x,num_of_iter);
            ans+=cur;
            num_of_iter++;



           }
    printf("%.16f|%.16f | %.16f|%d\n",x,ans,normal_function,num_of_iter-1);
    printf("______________________________________________________________________________\n");

    x+=delta;
    }
    return 0;
}
