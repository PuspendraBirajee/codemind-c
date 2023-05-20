# include<stdio.h>
int main()
{
    int n,max=0,f=1;;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
       if(c==0)
       {
           if(max<a[i])
           {
               max=a[i];
           }
           f=0;
       }
    }
    if(f==1)
    {
        printf("-1");
    }
    else 
    {
         printf("%d",max);
    }
}
