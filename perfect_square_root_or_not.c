#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=sqrt(n);
    int b=a*a;
    if(b==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}