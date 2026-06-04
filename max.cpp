#include<stdio.h>
int main()
{
	int arr[10];
	int i,d=0;
	int max=arr[0];
	for(;i<=9;i++) 
	scanf(" %d",&arr[i]);
	for(i=0;i<=9;i++)
	{
	 if(arr[i]>max)
	 {
	 	d=max;
	 	max=arr[i];
	 	arr[i]=d;
	 }
    }
    printf("%d",max);
    return 0;
 } 
