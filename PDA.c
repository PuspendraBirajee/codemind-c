#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(c==n)
    {
        printf("PERFECT");
    }
    else if(c<n)
    {
        printf("DEFICIENT");
    }
    else if (c>n)
    {
        printf("ABUNDANT");
    }
}