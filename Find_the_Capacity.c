#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int cap=2*s*t*b*512;
    int kb=cap/1024;
    printf("%dKB",kb);
}