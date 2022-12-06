#include<stdio.h>
int main()
{
    int n,r,c=0,e=0,o=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        if(n%2==0)
        {
            e++;
        }
        else if(n%2!=0)
        {
            o++;
        }
        n=n/10;
    }
    if(c==e)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}