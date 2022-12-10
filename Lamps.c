#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int rl=k*x;
    int nl=n-k;
    if(n==k)
    {
        printf("%d",rl);
    }
    else if(y<=x)
    {
       int a=nl*y;
       printf("%d",a+rl);
    }
    else if(y>=x)
    {
        int b=nl*x;
        printf("%d",b+rl);
    }
}