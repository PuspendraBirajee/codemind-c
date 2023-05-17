# include<stdio.h>
int pal(int);
int main()
{
    int n;
    scanf("%d",&n);
    n=n+pal(n);
    while(n!=pal(n))
    {
       n=n+pal(n); 
    }
    printf("%d",n);
}
int pal(int n)
{
int r,rev=0;

while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
return rev;
}
