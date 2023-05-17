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
    int n1,n2,f;
    scanf("%d %d",&n1,&n2);
   int n3=n1+n2;
    for(int i=n3+1; ;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }
    int t=f-n3;
    printf("%d",t);
    
}
