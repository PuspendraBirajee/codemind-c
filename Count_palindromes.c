#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++)
    {
        int t=a[i];
        int r=0;
        int rev=0;
        while(a[i]!=0){
        r=a[i]%10;
        rev=rev*10+r;
        a[i]=a[i]/10;
        }
        if(t==rev)
        {
            c++;
        }
    }
    printf("%d",c);
}