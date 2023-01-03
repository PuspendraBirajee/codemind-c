#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,b;
    scanf("%d",&n);
    int t=n-1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
           b=pow(2,t)*a[i];
               
           s=s+b;
           t=t-1;
    }
printf("%d",s);
}