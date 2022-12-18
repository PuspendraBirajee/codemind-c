#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        r=n%10;
        int f=1;
        for(int i=r;i>=1;i--)
        {
            f=f*i;
            
        }
        s=s+f;
        n=n/10;
    }
    if(s==t)
    {
     printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}