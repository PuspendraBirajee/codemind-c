#include<stdio.h>
int main()
{
    int n,rem,p=1,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
      rem=n%10;
      s=s+rem;
      p=p*rem;
      n=n/10;
    }
    
    printf("%d",p-s);
}