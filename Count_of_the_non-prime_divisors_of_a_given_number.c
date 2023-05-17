#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            c++;
        }
    }
    printf("%d",c);
    
}
