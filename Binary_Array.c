#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0||a[i]==1)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}