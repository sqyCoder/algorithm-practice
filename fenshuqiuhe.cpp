#include<stdio.h>
int main()
{
	int b=0;
	float sum=0.0;
	int a=1; 
	float c;
	for(b=1;b<=100;b++)
	{
	c=(float)a/b;
	if(b%2==0) 
	sum=sum-c;
	else
	sum=sum+c; 
    }
	printf("%f",sum);
	return 0;
} 
