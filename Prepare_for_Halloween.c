#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int c=2*x;
        int d=5*y;
        if(c>d)
        {
            printf("Chocolate
");
        }
        else if(d>c)
        {
            printf("Candy
");
        }
        else if(c==d)
        {
            printf("Either
");
        }
    }
}