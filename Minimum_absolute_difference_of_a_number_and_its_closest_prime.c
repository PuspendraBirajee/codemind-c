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
int main()
{
    int f,b;
        int x;
        scanf("%d",&x);
        for(int i=x; ; i++)
        {
            if(prime(i))
            {
                f=i;
                break;
            }
        }
        
        for(int i=x; ; i--)
        {
            if(prime(i))
            {
                b=i;
                break;
            }
        }
        int d1=f-x;
        int d2=x-b;
        if(d1>=d2)
        {
            printf("%d
",d2);
        }
        else if(d1<=d2)
        {
            printf("%d
",d1);
        }
    }
