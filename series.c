#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=2,b=1;
    scanf("%d",&n);
   
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
                        printf("%d ",b);
        	b=(b*2)+1;

         
        }
        else
        {
        	
             printf("%d ",a);
             a=(3*a)+2;
         
        }
    }
}