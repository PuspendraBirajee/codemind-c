#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    int s=n*n;
    int temp=s;
    while(s>0)
    {
      rem=s%10;
      sum=sum+rem;
      s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}