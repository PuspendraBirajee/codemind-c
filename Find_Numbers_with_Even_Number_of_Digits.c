# include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c=0;
        int t=a[i];
        while(t!=0)
        {
            int r=t%10;
            c++;
            t=t/10;
        }
            if(c%2==0)
            {
                count++;
            }
        }
    printf("%d",count);
}
