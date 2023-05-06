#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            printf("%d",i);
            break;
        }
        
    }
}