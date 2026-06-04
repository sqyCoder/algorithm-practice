#include<stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	do
	{
		b++;
		a=a/10;
	}
	while(a!=0);
	printf("%d",b);
 }  	
