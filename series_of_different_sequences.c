#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,k1=3,k2=-2;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
           
            printf("%d ",k1);
            a=3*k1-4;
            k1=a;
        }
        else
        {
            
            printf("%d ",k2);
            a=5*k2+12;
            k2=a;
        }
    }
}