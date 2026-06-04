#include<stdio.h>
int main()
{
    int a,b,c,d,e=0;
    scanf("%d",&a);
    if(a<0)
	a=-a;
	b=a/1000;
	c=(a%1000)/100;
	d=(a%100)/10;
	e=(a%10);
	printf("%d",b+c+d+e);
    return 0; 
}
