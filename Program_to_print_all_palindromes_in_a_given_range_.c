#include<stdio.h>
int pali(int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(pali(i))
        {
            printf("%d ",i);
        }
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