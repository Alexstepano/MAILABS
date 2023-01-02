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

double f_12(double x){
    return log(x)- x +1.8;
}
double f_12_derivative_first(double x){
    return 1.0/x-1;


}
double f_13(double x){
    return x*tan(x)- ((double)1/(double)3) ;
}
double f_13_derivative_first(double x){
    return x/(cos(x)*cos(x)) +tan(x);


}
double f_12_for_itter(double x){
    return log(x)+1.8;

}
double f_13_for_itter(double x){
    return atan(1.0/(3.0*x));

}
double separation(double f(double),double left, double right ,double dbleps){
    double x;
    while(fabs(left - right)>dbleps){
        x=(left + right)/2.0;
        if(f(x)*f(left)<0){
            right=x;
        }
        else {
            left=x;
        }

    }
return (left+right)/2.0;
}
double iterations(double f(double),double left, double right ,double dbleps){
    double x = (left+right)/2.0;

    while(fabs(f(x)-x)>dbleps){



            x=f(x);

    }
    return x;



}

double Newtons(double f(double),double f_frst(double),double left, double right ,double dbleps){
double x=(left+right)/2.0;
while (fabs(f(x)/f_frst(x)) > dbleps) {
        x-=f(x)/f_frst(x);

}
     return x;

}
int main()
{  double x=2.0;
   int64_t kerr=0;
   scanf("%d",&kerr);
   assert(kerr<16);
   double rate_error=Eps()*pow(10,16-kerr);
   printf("rate_error=%.16f\n",rate_error);
   void TEST_EPS();
   printf("The root of 12th  equation ln(x)- x +1.8=0:\n");
   printf("%.16f|%.16f|%.16f\n",iterations(f_12_for_itter,2.0,3.0,rate_error) ,Newtons(f_12,f_12_derivative_first,2.0,3.0,rate_error), separation(f_12,2.0,3.0,rate_error));
   printf("The root of 13th  equation x*tg(x) - 1/3=0:\n");
   printf("%.16f|%.16f|%.16f\n",iterations(f_13_for_itter,0.2,1.0,rate_error) ,Newtons(f_13,f_13_derivative_first,0.2,1.0,rate_error), separation(f_13,0.2,1.0,rate_error));
   return 0;
}
