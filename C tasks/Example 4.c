//Program of finding the value of d,x1,x2 from the quadratic equation.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter any number of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    float d;
    d=abs(b*b-4*a*c);
    d=sqrt(d);
    printf("\n Calculation of d is=%f",d);
    float x1,x2;
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("\n Calculation of x1 is=%f",x1);
    printf("\n Calculation of x2 is=%f",x2);
    return 0;



}
