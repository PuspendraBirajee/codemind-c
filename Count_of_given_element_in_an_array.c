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
    int t,c=0;
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            c++;
        }
    }
    printf("%d",c);
}