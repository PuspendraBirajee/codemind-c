#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i*j==n)
            {
                if(j-i==1)
                {
                    c=1;
                }
            }
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}