#include<stdio.h>
int main()
{
    int t,n,r;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int rev=0;
      scanf("%d",&n);
      int temp=n;
      while(n!=0)
      {
          r=n%10;
          rev=rev*10+r;
          n=n/10;
      }
      if(temp==rev)
      {
          printf("True
");
      }
      else
      {
          printf("False
");
      }
    }
}