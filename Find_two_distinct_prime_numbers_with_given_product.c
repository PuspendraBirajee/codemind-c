#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            c++;
        }
        
     }
    
    if(c==0)
    {
        printf("-1");
    }
   
}