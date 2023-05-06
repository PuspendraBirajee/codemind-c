#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=0;
    }
    while(n!=0)
    {
        r=n%10;
        a[r]=a[r]+1;
        n=n/10;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]>1)
        {
            printf("Not Unique Number");
            return 0;
        }
    }
    printf("Unique Number");
}