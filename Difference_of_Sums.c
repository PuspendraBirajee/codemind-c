#include<stdio.h>
int main()
{
    int n,s=0,s1=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       s=s+(i*i);
       s1=s1+i;
    }
    int sn=s1*s1;
    int diff=sn-s;
    printf("%d",diff);
}