#include <stdio.h>
int main()
{
   int N=0;
   int i=0;
     scanf("%d",&N);
    int monkey[1000]={0};
    for(i=0;i<=N-1;i++)
    {
        monkey[i]=1;
    }
    int count=0;
        int ramain=N;
    i=0;
    while(ramain>1)
    {
        if(monkey[i]==1)
        {
            count++;
            if(count==3)
            {
                ramain--;
                count=0;
                monkey[i]=0;
            }
        }
        i=(i+1)%N;
    }
    int j;
    for(j=0;j<=N-1;j++)
    {
        if(monkey[j]==1)
            printf("%d",j+1);
    }
    return 0;
}




    
