#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%10==0)
    {
        printf("%d",a/10);
    }
    else if(a%10==5)
    {
        printf("%d",(1)+(a/10));
    }
    else
    {
        printf("-1");
    }
}