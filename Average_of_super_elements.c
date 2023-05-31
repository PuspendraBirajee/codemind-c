#include<stdio.h>
int main()
{
    int n,c,sum=0;
    float c1=0;
    scanf("%d",&n);
    int a[n];
    int f=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        c=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            sum=sum+a[i];
            c1++;
            f=1;
            for(int k=0; k<n; k++)
            {
                if(a[i]==a[k])
                {
                    a[k]=0;
                }
            }
        }
    }
    if(f==0)
    {
    printf("-1");
    }
    else
    {
        printf("%.2f",sum/c1);
    }
}
