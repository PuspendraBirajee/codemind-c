#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n<3)
        {
            printf("LIGHT
");
        }
        else if(n>=3&&n<7)
        {
            printf("MODERATE
");
        }
        else if(n>=7)
        {
            printf("HEAVY
");
        }
    }
}