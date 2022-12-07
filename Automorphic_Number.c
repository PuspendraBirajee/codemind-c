#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    int temp=n;
    int sq=n*n;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int p=pow(10,c);
    int a=sq%p;
    if(a==temp)
    {
    printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}