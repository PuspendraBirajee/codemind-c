#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long m,n,res,j;
        scanf("%ld%ld",&n,&m);
        for( j=0;j<m;j++)
        {
            res=-1;
            if((j*j)%m==n)
            {
                res=j;
                break;
            }
        }
       printf("%ld
",res);
    }
     
}