#include<stdio.h>
int mega(int);
int main()
{
    int n,r,c1=0,c2=0;
    scanf("%d",&n);
   if(mega(n))
   {
       while(n!=0)
    {
        r=n%10;
         c1++;
         if(mega(r))
         {
             c2++;
         }
         n=n/10;
    }
    if(c1==c2)
    {
        printf("Mega Prime");
    }
    else
    {
         printf("Not Mega Prime");
    }
   }
   else
   {
       printf("Not Mega Prime");
   }
}
int mega(int n)
{
    int c=0;
     for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
          c++;
      }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}