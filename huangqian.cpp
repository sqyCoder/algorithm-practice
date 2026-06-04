#include <stdio.h>
int main()
{
    int n,count=0;
    long long suma=0;
    float b=0.01;
    float sumb=0;
    scanf("%d",&n);
    for(count=1;count<=n;count++)
    {
        suma=suma+100000;
    }
    for(count=1;count<=n;count++)
    {
        sumb=sumb+b;
     b=b*2;
    }
    printf("%d %.2f",suma,sumb);
    return 0;
}

