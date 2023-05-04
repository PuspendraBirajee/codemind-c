#include<stdio.h>
int main()
{
    int n,c=0,i=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        int r=n%10;
        c+=1;
        n/=10;
    }
    int a[c];
    while(t!=0)
    {
      int  r=t%10;
        a[i]=r;
        i++;
        t/=10;
    }
    for (int i=c-1; i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for (int i=c-1; i>=0;i--)
    {
        printf("%d",a[i]);
    }
}