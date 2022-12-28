#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int r=n-k;
    float s;
    s=k*x;
    if(x>=y)
    {
     s=s+r*y;
     printf("%.f",s);
    }
    else
    {
	s=s+r*x;
	printf("%.f",s);
    }
}