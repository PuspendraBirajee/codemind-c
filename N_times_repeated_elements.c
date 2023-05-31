#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
       scanf("%d",&a[i]); 
    }
    int k;
    scanf("%d",&k);
    for(int i=0; i<n; i++)
    {
        int c=0;
       for(int j=0; j<n; j++)
       {
           if(a[i]==a[j])
           {
               c++;
           }
       }
       if(c==k)
       {
           printf("%d ",a[i]);
           f=1;
           for(int k=0; k<n; k++)
           {
               a[i]=0;
           }
       }
    }
    if(f==0)
    {
    printf("-1");
    }
}