# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int s=0,len=2*n-1;
  int a[len][len];
  int  e=len-1;
   while(n!=0)
   {
   for(int i=s; i<=e; i++)
   {
       for(int j=s; j<=e; j++)
       {
           if(i==s || i==e || j==s || j==e)
           {
          a[i][j]=n; 
       }
       }
   }
       s++;
       e--;
       n--;
   }
   
   for(int i=0;i<len; i++)
   {
       for(int j=0; j<len; j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("
");
   }
   }
