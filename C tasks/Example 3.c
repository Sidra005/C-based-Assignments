//Program of a rectangle and calculating its area.
#include<stdio.h>
int main()
{
   int A,W,L;
   printf("Enter the value of A,W,L:");
   scanf("%d%d%d",&A,&W,&L);
   A=(L*W);
   printf("The area of the rectangle is:%d",A);
   return 0;
}
