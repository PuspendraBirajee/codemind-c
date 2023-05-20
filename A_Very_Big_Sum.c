# include<stdio.h>
int main()
{
    long n,sum=0;
    scanf("%ld",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       sum=sum+a[i]; 
    }
    printf("%ld",sum);
}
