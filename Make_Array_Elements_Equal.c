# include<stdio.h>
int main()
{
    int n,c=1,p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[0];
    for(int i=1; i<n; i++)
    {
        if(x==a[i])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("0");
    }
    else 
    {
    
    for(int i=0; i<n; i++)
    {
       int count=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>p)
        {
            p=count;
        }
    }
    printf("%d",p);
}
}
