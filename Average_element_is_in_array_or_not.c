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
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    int avg=sum/n;
    for(int k=0;k<n;k++)
    {
        if(a[k]==avg)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}