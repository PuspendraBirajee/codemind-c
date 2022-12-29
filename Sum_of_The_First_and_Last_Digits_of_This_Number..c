#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
      int n,r,c=0;
    scanf("%d",&n);
    int te=n;
    int a=n%10;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int b=pow(10,c-1);
    int d=te/b;
    printf("%d
",a+d);
    }
}