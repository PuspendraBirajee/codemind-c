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
    for(int i=0;i<n;i++)
    {
       if(min>a[i])
       {
           min=a[i];
       }
    }
    printf("%d",min);
}