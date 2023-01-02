#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,s1=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
          s=s+a[i];
      }
      else
      {
          s1=s1+a[i];
      }
       
    }
   printf("%d",abs(s-s1));
}