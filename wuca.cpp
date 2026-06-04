#include<stdio.h>
#include<math.h>
int main()
{
	double A,B;
	scanf("%lf,%lf",&A,&B);
	printf("%-15.6lf+%15.6lf=%-.2lf\n",A,B,A+B);
	double a=round(A*100)/100;
	double b=round(B*100)/100;
	printf("%-15.2lf+%15.2lf%=%-.2lf\n",a,b,a+b);
	printf("dev:%.6f\n",a+b-A-B);
	return 0;
 } 
































