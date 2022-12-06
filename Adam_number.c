#include<stdio.h>
int main()
{
    int n,rev=0,rev1=0;
    scanf("%d",&n);
   int sq=n*n;
   while(n>0)
   {
       rev=rev*10+(n%10);
       n=n/10;
   }
   int sqrev=rev*rev;
   while(sqrev>0)
   {
       rev1=rev1*10+(sqrev%10);
       sqrev=sqrev/10;
   }
   if(sq==rev1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}