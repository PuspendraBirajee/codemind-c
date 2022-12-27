#include<stdio.h>
#include<math.h>
int main()
{
    int t,r,n,r1;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
       
        scanf("%d",&n);
        r=sqrt(n);
      r1=r*r;  
    if(r1==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}