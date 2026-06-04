#include<stdio.h>
int main()
{
	int x,y,z,n;
	int count=0; 
	scanf("%d",&n);
	for(x=19;x>=1;x--)
	{
	y=80-4*x;
	z=20+3*x; 
	printf("%d %d %d\n",x,y,z);
	count++;
	if(count==n)
	break;
	}
	return 0; 
} 
