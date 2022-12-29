#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,r;
        scanf("%d",&n);
        int te=n;
       int rev=0;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
    
    if(rev==te)
        {
          c++;  
        }
    }
    if(c==t)
    {
        printf("1");
    }
        else
        {
            printf("0");
        }
}