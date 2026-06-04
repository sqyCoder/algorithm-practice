#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && c+b>a)
	{ 
	if(a==b && b==c)
	printf("Equilateral triangle!");
	else if(a==b || a==c || b==c )
	printf("Isosceles triangle!");
	else
	printf("Ordinary triangle!"); 
    }
    else
	printf("Not a triangle!");
 } 
