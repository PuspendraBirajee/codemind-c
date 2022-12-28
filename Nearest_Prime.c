#include<stdio.h>
int prime(int);
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,f,b,d1,d2;
        scanf("%d",&n);
        for(int j=n;;j++)
        {
            if(prime(j))
            {
                f=j;
                break;
            }
        }
        for(int k=n;;k--)
        {
            if(prime(k))
            {
                b=k;
                break;
            }
        }
        d1=f-n;
        d2=n-b;
        if(d2<=d1)
        {
            printf("%d
",b);
        }
       
        else
        {
            printf("%d
",f);
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