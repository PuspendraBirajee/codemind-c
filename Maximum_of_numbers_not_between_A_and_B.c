#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,d;
    scanf("%d%d",&c,&d);
    int max=a[0];
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=c && a[i]<=d)
        {
            cnt++;
        }
        else
        {
            if(a[i]>max)
            {
                max=a[i];
                f=1;
            }
        }
    }
    if (cnt == n)
    {
        printf("-1");
    }
    else
    {
        printf("%d", max);
    }

}