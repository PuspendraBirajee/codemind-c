#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
       
    }
    printf("
");
    n=n-1;
    }
}