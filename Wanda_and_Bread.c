#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&k,&m);
    int a=m*k;
    if(n<=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}