#include<stdio.h>
int main()
{
    int n,c,c1=0;
    scanf("%d",&n);
    int a[n];
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
            c1++;
            for(int k=0; k<n; k++)
            {
                a[i]=0;
            }
        }
    }
    printf("%d",c1);
}