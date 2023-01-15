#include<stdio.h>
int pali(int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(pali(i))
        {
            printf("%d ",i);
        }
    }
    
}
int pali(int n)
{
    int r;
    int t=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=0)
        {
        if(t%r!=0)
        {
          return 0; 
        }
       }
      else
       {
       return 0;
      }
      n=n/10;
}
return 1;
}