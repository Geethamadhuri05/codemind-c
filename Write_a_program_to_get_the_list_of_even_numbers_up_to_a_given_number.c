#include<stdio.h>
int main()
{
    int x,n,i;
    scanf("%d%d",&x,&n);
    for(i=1*x;i<=n;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}