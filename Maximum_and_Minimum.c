#include<stdio.h>
int main()
{
    int n,c1=0,f=0,max=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int min=10000;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            // if(a[i]>max)
            // {
            //     f=1;
            //     max=a[i];
            //     if(a[i]<max)
            //     {
            //         min=a[i];
            //     }
            // }
            b[i]=a[i];
            c1++;
            for(int k=0; k<n; k++)
            {
                a[i]=0;
            }
        }
        
    }
    for(int i=0;i<c1; i++)
    {
        //printf("%d ",b[i]);
        if(b[i]>max)
        {
            f=1;
            max=b[i];
        }
        if(b[i]<min)
        {
            //f=1;
            min=b[i];
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d %d",min,max);
    }
    
}