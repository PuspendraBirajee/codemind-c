# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j || j==(n+1)-i )
            {
                printf("x");
            }
            else 
            {
                printf("0");
            }
        }
        printf("
");
    }
}
