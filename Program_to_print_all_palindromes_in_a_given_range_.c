# include<stdio.h>
int main()
{
    int m,n,i;
   
    scanf("%d%d",&m,&n);
    for(int i=m; i<=n; i++)
    {
        int r,rev=0; 
        int t=i;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
}
