#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg,s=0,c=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}