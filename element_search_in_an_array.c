#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
       if(b==a[i])
       {
           printf("True");
           return 0;
       }
       
    }
    printf("False");
}