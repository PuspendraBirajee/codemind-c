#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(d>=l&&d<=r)
        {
            printf("Take second dose now
");
        }
        else if(d>l&&d>r)
        {
            printf("Too Late
");
        }
        else if(d<l)
        {
            printf("Too Early
");
        }
    }
}