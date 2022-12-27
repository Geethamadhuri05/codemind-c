#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    if(n%4==0)
    {
        printf("%d",n/4);
    }
    else
    {
    a=1+n/4;
         printf("%d",a);
    }
}