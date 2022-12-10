#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int t=k*m;
    if(n%t==0)
    {
        printf("%d",n/t);
    }
    else
    {
        printf("%d",n/t+1);
    }
}