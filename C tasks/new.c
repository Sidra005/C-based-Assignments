#include<stdio.h>
int main()
{
    int x=5,y=7,z=1,f;
    f=x++ || --y && ++z;
    printf("%d%d%d%d",x,y,z,f);
}
