#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("%d",n/10);
    }
    else if(n%5==0)
    {
        a=n%10;
        b=a/5;
        c=n/10;
        printf("%d",b+c);
    }
    else
    {
        printf("-1");
    }
}