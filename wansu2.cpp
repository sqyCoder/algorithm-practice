#include <stdio.h>
int main()
{
    int a=0,n=0;
    for(a=2;a<=1000;a++)
    {
    	int sum=0;
        for(n=1;n<a;n++)
        {
        if(a%n==0)
            {
            sum=sum+n;
            }
        }
        if(sum==a)
            printf("%5d",a);
    }
    return 0;	
}
