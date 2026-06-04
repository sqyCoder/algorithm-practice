#include<stdio.h>
int main()
{
	int a=0;
	int sum=0; 
	for(a=3;a%3==0 && a<=100;a=a+3)
	{
	sum=a+sum;
    }
    printf("%d",sum);
    return 0;
 } 
