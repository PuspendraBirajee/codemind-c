# include<stdio.h>
int main()
{
    int n,hcf,i,j;
    scanf("%d",&n);
    int a[10000];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
   int n1=a[i];
   int n2=a[i+1];
   for(int j=1; j<=n1 && j<=n2; j++)
   {
       if(n1%j==0 && n2%j==0)
       {
           hcf=j;
       }
   }
       a[i+1]=hcf;
    }
   printf("%d",a[n-1]);
}
