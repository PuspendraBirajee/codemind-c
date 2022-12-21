#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,count=0;
    scanf("%d%d",&m,&n);
    if(m==1)
    {
        m++;
    }
    for(int i=m;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            count++;
        }
    }
    printf("%d",count);
}