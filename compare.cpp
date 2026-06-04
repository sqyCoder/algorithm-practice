#include<stdio.h>
int main()
{
	int a,b=0; 
    for(;scanf("%d %d",&a,&b)==2;)
    {
	if(a<b)
	printf("%d<%d\n",a,b);
	else if(a>b)
	printf("%d>%d\n",a,b);
	else
	printf("%d=%d\n",a,b);
    }
    return 0; 
}
