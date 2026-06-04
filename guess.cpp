#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
int input = 0;
do
  { 
printf("********************\n");
printf("********************\n"); 
printf("******1.play********\n");
printf("******0.exit********\n");
printf("********************\n");
printf("********************\n");
printf("请选择：\n");
scanf("%d",&input);
switch (input)
       {
case 1:
	{
	int count=8 ;
	int a=0 ;
	srand((unsigned)time(NULL));
	int secret=rand()%100+1;
	again:
	if(count==0)
	{
	printf("8次未猜对，挑战已失败" ); 
	return 0;
	}  
	else
	printf("还剩%d次机会，请输入：",count) ; 
	scanf("%d",&a);
	if(a<secret) 
     {
	printf("猜小了\n") ;
	count--;
	goto again; 
	 }
	else if(a>secret)
	 {
	printf("猜大了\n");
	count--;
	goto again;	
	 } 
	else
	printf ("恭喜你猜对了！\n"); 
	return 0; 
    } 
break;
case 0:
printf("退出游戏\n");
break;
default:
printf("选择错误，重新选择\n");
break;
       }
  }
 while (input);
return 0;
}
 
