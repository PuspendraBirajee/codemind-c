#include<stdio.h>
int di(int);
int main()
{
    int n,c1=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(di(i)==9)
        {
            printf("%d ",i);
            c1++;
        }
    }
    printf("
Total=%d",c1);
}
int di(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
   return c;
}