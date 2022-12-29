#include<stdio.h>
int main()
{
    int n,n1;
    scanf("%d",&n);
    printf("%d ",n);
    while(n>0)
    {
    	
        if(n%2==0)
        {
            n1=n/2;
            printf("%d ",n1);
        }
        else if(n%2!=0&&n!=1)
        {
            n1=(3*n)+1;
             printf("%d ",n1);
        }
        else if(n==1)
        {
        	break;
		}
        n=n1;
    }
}