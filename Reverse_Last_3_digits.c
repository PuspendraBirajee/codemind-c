#include<stdio.h>
int main()
{
    int n,c,rev=0;
    scanf("%d",&n);
    int t=n;
   int a=n%1000;
    int b=n/1000;
    while(a!=0)
    {
        c=a%10;
        rev=rev*10+c;
        a=a/10;
    }
    int n1=b*1000+rev;
    printf("%d",n1);
}