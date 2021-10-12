//A program to check weather a given number is even or odd.
#include<stdio.h>
int main()
{
    int m;
    printf("Enter a number:");
    scanf("%d,&m");
    if(m%2==0)
        printf("This is even number");
    else
        printf("This is odd number");
    return 0;

}
