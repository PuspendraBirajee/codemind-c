#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,k1=0,k2=0;
    scanf("%d",&n);
    printf("0 ");
    for(int i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            a=pow(2,k1);
            k1++;
        }
        else
        {
            a=pow(3,k2);
            k2++;
        }
        printf("%d ",a);
    }
}