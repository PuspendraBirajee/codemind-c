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
    for(int j=0;j<n;j++)
    {
        if(a[j]%2!=0)
        {
            printf("%d ",a[j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]%2==0)
        {
            printf("%d ",a[k]);
        }
    }
}