#include<stdio.h>
int main()
{
	int a,b,temp=0;
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("%d",a);
	return 0;
 } 
