#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ai=l*b;
    int ao=(l+2*w)*(b+2*w);
    int af=ao-ai;
    printf("%d",af*c);
}