#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,r,c=0;
    scanf("%d%d",&n,&x);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int c2=c-x;
    int c1=pow(10,x);
    int c3=pow(10,c2);
    int rem=t%c1;
    int quo=t/c3;
    int ab=abs(quo-rem);
    printf("%d",ab);
}