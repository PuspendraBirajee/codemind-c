#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("%d",n/4);
    }
    else
    {
        printf("%d",n/4+1);
    }
}