#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int max=0;
    while(n!=0)
    {
       r=n%10;
       if(r>max)
       {
           max=r;
       }
       n=n/10;
    }
    printf("%d",max);
}