#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,rem,sum=0;
    scanf("%d",&n);
    int t=n;
    int t1=n;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    while(t>0)
    {
        rem=t%10;
        sum=sum+pow(rem,c);
        t=t/10;
        c--;
    }
    if(t1==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}