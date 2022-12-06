#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    { 
        int a,f=1;
        scanf("%d",&a);
        for(int i=1;i<=a;i++)
        {
          f=f*i;
        }
        printf("%d
",f);
        n=n-1;
    }

}