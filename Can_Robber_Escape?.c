# include<stdio.h>
int main()
{
     int n,c=0;
     scanf("%d",&n);
     int a[n];
     for(int i=0; i<n; i++)
     {
         scanf("%d",&a[i]);
     }
     for(int i=0; i<n; i++)
     {
         if(n<=a[i])
         {
             c++;
         }
     }
     if(c==0)
     {
         printf("YES");
     }
     else 
     {
         printf("NO");
     }
}
