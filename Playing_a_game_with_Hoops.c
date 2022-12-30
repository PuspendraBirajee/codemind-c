#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d
",n/2);
        }
        else
        {
            printf("%d
",n/2+1);
        }
    }
}