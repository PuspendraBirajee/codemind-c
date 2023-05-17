# include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    int min=x[0];
    for(int i=0; i<n; i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(x[i]%min==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("%d",min);
    }
    else 
    {
        printf("1");
    }
}
