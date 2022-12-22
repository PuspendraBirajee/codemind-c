#include<stdio.h>
int fun(int);
int main()
{
    int n,c1=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(fun(i))
            {
               c1++; 
            }
        }
    }
    printf("%d",c1);
}
int fun(int n)
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
        return 0;
    }
    else
    {
        return 1;
    }
}