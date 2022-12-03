#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

int64_t mx[4]={1,0,-1,0};
int64_t my[4]={0,-1,0,1};

int main()
{    int64_t matrix[100][100];
     int64_t n=0;
     printf("Enter the dimension of the matrix\n");
     scanf("%lld",&n);
     if(n==0){
        return 0;
     }
     printf("Enter the elements of the matrix\n");
     for(int64_t i=0;i<n;i++){
        for(int64_t j=0;j<n;j++){
            scanf("%lld",&matrix[j][i]);
        }
     }
     int64_t left_x_border=0;
     int64_t right_x_border=n-1;
     int64_t lowwer_y_border=n-1;
     int64_t upper_y_border=0;
     int64_t x=0;
     int64_t y=n-1;
     int64_t p=0; //pointer for mx and my
     int64_t flag=0;

     while(left_x_border!=right_x_border){
       printf("%lld ",matrix[x][y]);
       x+=mx[p];
       y+=my[p];
       if(x==right_x_border&&y==lowwer_y_border){
        p=1;
        if(lowwer_y_border!=upper_y_border){
            lowwer_y_border--;
            printf("%lld ",matrix[x][y]);
            y--;
        }
        else{
            printf("%lld ",matrix[x][y]);
            p=2;
            continue;
        }
       }
      if(x==right_x_border&&y==upper_y_border){
          p=2;
          if(right_x_border!=left_x_border){
            right_x_border--;
            printf("%lld ",matrix[x][y]);
            x--;
          }
        }
        if(x==left_x_border&&y==upper_y_border){
                p=3;
           if(lowwer_y_border!=upper_y_border){
            upper_y_border++;
            printf("%lld ",matrix[x][y]);
            y++;
           }
        }
        if (x==left_x_border&&y==lowwer_y_border){
            p=0;
            if (left_x_border!=right_x_border){
                left_x_border++;

                printf("%lld ",matrix[x][y]);
                x++;
            }
        }

       }
       printf("%lld ",matrix[x][y]);
    return 0;
}
