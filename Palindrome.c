#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}