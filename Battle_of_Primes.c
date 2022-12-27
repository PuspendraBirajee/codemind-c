#include<stdio.h>
int prime(int);
int main()
{
    int n1,n2,f,n3;
    scanf("%d%d",&n1,&n2);
    int n=n1+n2;
    for(int i=n+1;;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }
    n3=f-n;
    printf("%d",n3);
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