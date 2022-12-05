#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("True");
    }
    else if(n%100==0)
    {
        printf("False");
    }
    else if(n%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}