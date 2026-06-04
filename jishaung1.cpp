#include <stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
        float a,average=0.0;
    float min=100.5;
        float max=-1;
        float sum=0;
        scanf("%d",&n);
    for(count=1;count<=n;count++)
    {
         scanf("%f",&a);
        sum=sum+a;
            if(a>max)
                max=a;
                if(a<min)
                min=a;
    }
    average=(sum-min-max)/(n-2);
        int f=round(average);
        printf("%d %.1f %.1f",f,min,max);
    return 0;
}

