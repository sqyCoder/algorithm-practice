#include <stdio.h>
int main() 
{
    int a,b,count=0;
    scanf("%d\n %d",&a,&b); 
    for(count=1;count<=a;count++)
  {
    printf("*");
  }
  printf("\n") 
  for(count=1;count<=b;count++)
	{
	 printf("*");	
	}  
    return 0;
}
