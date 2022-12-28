#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        for(int i=n;i>=1;i--)
        {
       printf("%d ",i);
        }
       printf("
");
    }
}