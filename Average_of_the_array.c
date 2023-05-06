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
   float sum=0;
    for(int j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    float avg=sum/n;
    printf("%.2f",avg);
}