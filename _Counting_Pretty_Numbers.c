# include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     for(int i=1; i<=n; i++)
     {
         int l,r;
         int c=0;
         scanf("%d%d",&l,&r);
         for(int j=l;j<=r; j++ )
         {
             int rem=j%10;
             if(rem==2 || rem==3 || rem==9)
             {
                 c++;
             }
         }
         printf("%d
",c);
     }
}
