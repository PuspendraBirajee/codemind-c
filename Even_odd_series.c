#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,k1=1,k2=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
           a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            
             printf("%d ",b);
           b=pow(3,k2);
           k2++;
        }
    }
}