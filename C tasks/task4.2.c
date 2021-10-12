// A program to check whether a given number is positive or negative.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",n);
    n>0? printf("%d is positive number\n",n):("%d is negative number\n",n);
    return 0;
}
