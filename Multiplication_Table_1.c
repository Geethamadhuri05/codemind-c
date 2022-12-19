#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}