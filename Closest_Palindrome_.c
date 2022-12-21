#include<stdio.h>
int pal(int);
int main()
{
    int n,f,b,d1,d2;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(pal(i))
        {
            f=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(pal(i))
        {
            b=i;
            break;
        }
    }
    d1=f-n;
    d2=n-b;
    if(d1>d2)
    {
        printf("%d",b);
    }
    else if(d1<d2)
    {
        printf("%d",f);
    }
    else if(d1==d2)
    {
        printf("%d %d",b,f);
    }
}
int pal(int n)
{
    int r,rev=0;
    int t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}