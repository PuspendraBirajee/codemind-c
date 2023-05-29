#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int r=0;
        int s=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            s=s+r;
            a[i]=a[i]/10;
        }
        sum=sum+s;
    }
    printf("%d",sum);
}