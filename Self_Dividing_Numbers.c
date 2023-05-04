#include<stdio.h>
int self(int n)
{
    int r,t=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=0)
        {
            if(t%r!=0)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        for(int i=a; i<=b;i++)
        {
            if(self(i))
            {
                printf("%d ",i);
            }
        }
}