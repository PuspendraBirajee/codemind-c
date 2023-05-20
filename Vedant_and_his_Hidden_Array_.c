# include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long int n;
        long long int a;
        scanf("%lld%lld",&n,&a);
        if(n==1)
        {
            if(a%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
             continue;
        }
       
        if(a%2!=0)
        {
            if(n%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else
        {
            printf("Impossible
");
        }
        
        
    }
}
