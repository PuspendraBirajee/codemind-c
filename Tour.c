#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d
",n*5+m*7);
    }
}