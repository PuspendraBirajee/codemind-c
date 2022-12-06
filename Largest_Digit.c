#include<stdio.h>
int main()
{
    int n,max=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>max)
        {
            
            max=rem;
        }
        n=n/10;
    }
   printf("%d",max); 
}