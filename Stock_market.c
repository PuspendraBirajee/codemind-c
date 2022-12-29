#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            printf("LOSS
");
           
        }
        else if(x<y)
        {
             printf("PROFIT
");
        }
        else if(x==y)
        {
            printf("NEUTRAL
");
        }
    }
}