#include<stdio.h>
int main()
{
    int a,l,u;
    scanf("%d%d%d",&a,&l,&u);
    for(int i=l;i<=u;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}