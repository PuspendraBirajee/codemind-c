#include<stdio.h>
int main()
{
    int l,u;
    scanf("%d%d",&l,&u);
    for(int i=l;i<=u;i=i++)
    {
        if(i%2==0)
        {
       printf("%d ",i);
        }
        i++;
    }
}