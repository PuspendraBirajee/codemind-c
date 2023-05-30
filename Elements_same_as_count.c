#include<stdio.h>
int main()
{
    int n,c;
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
            printf("%d ",a[i]);
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
    if(f==0){
    printf("-1");
    }
}