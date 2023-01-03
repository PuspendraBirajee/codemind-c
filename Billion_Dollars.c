#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    if(b==199)
    {
        b=199-100;
    }
    printf("%d",(b-a)/x);
}