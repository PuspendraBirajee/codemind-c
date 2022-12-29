#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x>y&&x<z||x<y&&x>z)
        {
            printf("%d
",x);
        }
        else if(y>x&&y<z||y<x&&y>z)
        {
             printf("%d
",y);
        }
        else if(z>x&&z<y||z<x&&z>y)
        {
             printf("%d
",z);
        }
    }
   
}