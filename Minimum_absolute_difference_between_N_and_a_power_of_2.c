#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,i=1;
    scanf("%d",&n);
    while(x<=n)
    {
        x=pow(2,i);
        i++;
    }
  int  f=x;
  int  b=f/2;
  int  d1=f-n;
  int  d2=n-b;
  if(d1<d2)
  {
    printf("%d",d1);
  }
  else
  {
      printf("%d",d2);
  }
}