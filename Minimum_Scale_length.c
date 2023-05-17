#include<stdio.h>
int main()
{
int arr[100000],i,j,n,n1,n2,hcf;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
n1=arr[i];
n2=arr[i+1];
for(j=1;j<=n1&&j<=n2;j++)
{
if(n1%j==0&&n2%j==0)
{
hcf=j;
}
}
arr[i+1]=hcf;
}
printf("%d",arr[n-1]);
}
