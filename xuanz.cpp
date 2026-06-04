#include <stdio.h>
int main()
{
    int n=0,count=0,temp=0,a=0,b=1,c=0,d=0;
        scanf("%d",&n);
    int arr[n];
        for(count=1;count<=n;count++)
        {
         scanf(" %d",&arr[n]);
        }
    while(a<=n-1)
    {
        if(arr[a]<arr[b])
        {
            arr[a]=temp; 
            temp=arr[b];
            arr[b]=arr[a];
            count++;
            a++;
            b=0;
            for(d=1;d<=n-1;d++)
            {
            for(c=0;c<n-1;c++)
        {
        printf("step %d:",d);
        printf(" %d\n",arr[c]);
        }
            }
        }
            else
            {
                b++;
            }
    }
    for(c=0;c<n-1;c++)
     printf("sorted array: %d",arr[c]);
    return 0;
}
