#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,s=0,p=1;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}