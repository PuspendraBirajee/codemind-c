#include<stdio.h>
int prime(int);
int pali(int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(prime(i)&&pali(i))
        {
          printf("%d",i);
          break;
        }
    }
    
}
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
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
int pali(int n)
{
    int r,rev=0;
    int t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}