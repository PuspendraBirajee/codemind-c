#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int e[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(e[i]<a || e[i]>b)
        {
            sum=sum+e[i];
        }
    }
    printf("%d",sum);
}