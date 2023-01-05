#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   int a,b,c=0,f=0;
   scanf("%d%d",&a,&b);
   for(int i=0;i<n;i++)
   {
       if(x[i]>=a&&x[i]<=b)
       {
           c++;
       }
       else
       {
           printf("%d ",x[i]);
           f++;
       }
   }
   if(f==0)
   {
        printf("-1");
   }
}