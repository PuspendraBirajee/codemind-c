#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r,c1=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        while(a[i]!=0)
        {
        r=a[i]%10;
        c++;
        a[i]=a[i]/10; 
        }
        if(c%2==0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}