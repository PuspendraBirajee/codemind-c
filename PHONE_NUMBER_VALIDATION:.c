#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=100000000&&n<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}