# include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
    if(i==j)
    {
        printf("%d ",a[i]);
    }
}
    
}
