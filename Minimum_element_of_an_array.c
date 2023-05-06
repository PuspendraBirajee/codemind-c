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
    int min=a[0];
    for(int j=0;j<n;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    printf("%d",min);
}