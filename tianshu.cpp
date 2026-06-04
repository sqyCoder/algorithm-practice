#include <stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d/%d/%d",&a,&b,&c);
    if((a/4==0 && a/100!=0) || a/400==0)
    {
        d=1; 
    }
    int f=0;
    if(b>1) f=f+31;
    if(b>2) f=f+(d?29:28);
    if(b>3) f=f+31;
    if(b>4) f=f+30;
    if(b>5) f=f+31;
    if (b>6) f=f+30;
    if(b>7) f=f+31;
    if(b>8) f=f+31;
    if(b>9) f=f+30;
    if(b>10) f=f+31;
    if(b>11) f=f+30;
      f=f+c;
      printf("%d",f);
  return 0;
}
