#include<stdio.h>
int main()
{
	int b,a=0;
	for(a=100;a<=200;a++)
	{
	 int count=0; 
	 for(b=2;b<=a-1;b++)
	  {
	   if(a%b==0)
	   count++;
      }
	 if(count==0)
	 printf("%d ",a); 
    } 
	return 0;
}
