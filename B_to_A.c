#include<stdio.h>
int main()
{
    int x,n,i;
    scanf("%d%d",&x,&n);
    for(i=n;i>=x;i--)
    {
        printf("%d ",i);
    }
}