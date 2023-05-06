#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    int sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}