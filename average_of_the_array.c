#include<stdio.h>
int main()
{
    int n;
    float ag, s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(int i=0;i<n;i++)
    {
           s=s+a[i];
    }
         ag=s/n;
    printf("%.2f",ag);
}