#include<stdio.h>
int fibo(int);
int main()
{
    int n,f,b,d1,d2;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        if(fibo(i))
        {
            f=i;
            break;
        }
    }
    for(int j=n;;j--)
    {
        if(fibo(j))
        {
            b=j;
            break;
        }
    }
    d1=f-n;
    d2=n-b;
    if(d1<d2)
    {
        printf("%d",f);
    }
    else if(d2<d1)
    {
        printf("%d",b);
    }
    else if(d1==d2)
    {
        printf ("%d %d",b,f);
    }
}
int fibo(int n)
{
    int a,b,c;
    if(n==0||n==1)
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
    if(n==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}