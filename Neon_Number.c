#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0)
    {
        r=i%10;
        s=s+r;
        i=i/10;
    }
    if(n == s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}