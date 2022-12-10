#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&c>b)
    {
        printf("%d",a+c);
    }
    else if(a>c&&b>c)
    {
        printf("%d",a+b);
    }
    else
    {
        printf("%d",b+c);
    }
}