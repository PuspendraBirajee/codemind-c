#include<stdio.h>
int main()
{
   int n;
   int r,c=0,i=0;
   scanf("%d",&n);
   int t=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int a[c];
    while(t!=0)
    {
        r=t%10;
        a[i]=r;
        i++;
        t=t/10;
    }
    for(int i=c-1; i>=0; i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
           break;
        }
    }
    for(int i=c-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }
}
