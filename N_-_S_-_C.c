#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<b;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d
",i*i*i);
        
    }
}