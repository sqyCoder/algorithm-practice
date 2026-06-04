#include <stdio.h>
#include <math.h>
int main()
{
    float y,x;
        scanf("%f",&x);
        if(x>=1 && x<2){
        y=3*x+5;
           printf("%f",y);
        }
        else if(x>=2 && x <3){
        y=2*sin(x)-1;
           printf("%f",y);
        }
        else if(x>=3 && x<4){
        y=sqrt(1+x*x);
           printf("%f",y);
        }
        else if(x>=4 && x<5){
        y=x*x-2*x+5;
           printf("%f",y);
        }
        else if(x<1 || x>=5){
           printf("No define!");
}
    return 0;
}
