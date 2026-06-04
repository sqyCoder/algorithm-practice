#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    scanf("%f\n%f",&a,&b);
    float c=sqrt(a*a+b*b);
    printf("The diagonal legnth is£º%.1fcm",c);
    return 0;
}
