#include<stdio.h>
int mega(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
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
int main()
{
  int n;
  scanf("%d",&n);
  int c=0;
  int count=0;
if(mega(n))
      {
        while(n!=0)
        {
          int r=n%10;
            c++;
            if(mega(r))
             {
                count++;
              }
              n=n/10;
            }
        if(c==count)
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
