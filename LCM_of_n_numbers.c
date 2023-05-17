# include<stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
       int max=a[0];
        for(int i=0; i<n; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        for(int j=max; ; j++)
        {
           int  c=0;
        for(int i=0; i<n; i++)
        {
            if(j%a[i]==0)
            {
                c++;
            }
        }
        
        if(c==n)
        {
            printf("%d",j);
            break;
        }
    }
    }
