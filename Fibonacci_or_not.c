#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("%d",n);
    }
    else
    {
        a=0;
        b=1;
        c=a+b;
    }
    while(n>c)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}