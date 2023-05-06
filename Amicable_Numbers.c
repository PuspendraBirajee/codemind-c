#include<stdio.h>
int main()
{
    int a,b,s1=0,s2=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s1=s1+i;
        }
    }
    for(int j=1;j<b;j++)
    {
        if(b%j==0)
        {
            s2=s2+j;
        }
    }
    if(s1==b && s2==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}