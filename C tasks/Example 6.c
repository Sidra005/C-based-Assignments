//program of average of three numbers entered by the users.
#include<stdio.h>
void main()
{
   int n,m,f,sum;
   float avg;
   printf("Enter three integer value:");
   scanf("%d%d%d",&n,&m,&f);
   sum=n+m+f;
   avg=(float)sum/3;
   printf("\n The summation of the three number are=%d",sum);
   printf("\n Average of the three number are=%f",avg);
}

