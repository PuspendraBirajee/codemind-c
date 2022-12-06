#include<stdio.h>
int main()
{
    int n,u;
    scanf("%d%d",&n,&u);
    for(int i=1;i<=u;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}