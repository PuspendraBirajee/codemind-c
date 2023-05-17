#include<stdio.h>
int palindrome(int n)
{
    int p=n;
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==p)
    {
        return 1;
    }
    else
    {
        return 0; 
    }
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        int f,b;
        for(int i=n+1; ; i++)
        {
            if(palindrome(i))
            {
                f=i;
                break; 
            }
        }
        for(int i=n-1; ; i--)
        {
            if(palindrome(i)) 
            {
                b=i;
                break;
            }
        }
        int d1=f-n;
        int d2=n-b;
        if(d1>d2) 
        {
            printf("%d",b);
        }
        else if(d2>=d1) 
        {
            printf("%d %d ",b,f); 
        }
        
    }