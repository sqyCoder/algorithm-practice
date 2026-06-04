	#include<stdio.h>
	int main()
	{
	    int count=0,n=0,temp=0;
	    int b=1;
		int a=1; 
	    for(count=1;count<=20;count++)
	    {
	        printf("%8d",a);
	        n++;
	        if(n%5==0)
	        {
	            printf("\n");
	        }
	        temp=a+b;
	            a=b;
	            b=temp;
	    }
	    return 0;
	}
