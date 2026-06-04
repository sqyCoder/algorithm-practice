#include<stdio.h>
int main()
{
    int a,b,c,d=0;
        scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    if(b*b*b+c*c*c+d*d*d==a)
        printf("YES");
    else
        printf("NO");
    return 0;
}
