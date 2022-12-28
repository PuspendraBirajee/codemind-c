#include<stdio.h>
int main()
{
    int n,r,rev=0,r1,rev1=0;
    scanf("%d",&n);
    int sq=n*n;
    
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int sq1=rev*rev;
    
    while(sq1!=0)
    {
        r1=sq1%10;
        rev1=rev1*10+r1;
        sq1=sq1/10;
    }
    if(sq==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}