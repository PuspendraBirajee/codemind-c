#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int n,f,b,d1,d2,ab;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }
    for(int i=n;;i--)
    {
        if(prime(i))
        {
            b=i;
            break;
        }
    }
    d1=f-n;
    d2=n-b;
if(d1>=d2)
{
    printf("%d",d2);
}
else if(d1<d2)
{
    printf("%d",d1);
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