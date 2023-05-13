#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1,c;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
      
    }
}