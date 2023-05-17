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
        return 1;
    }
    else
    {
        return 0;
    }
}
int pal(int n)
{
    int p=n;
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,f;
    scanf("%d",&n);
    for(int i=n+1; ; i++)
    {
        if(prime(i) && pal(i))
        {
            f=i;
            break;
        }
    }
    printf("%d",f);
    
}
