#include<stdio.h>
int main()
{
long int arr[10000],i,j,n,n1,t,p,q,k;
scanf("%ld",&n);
q=n;
for(i=0;i<n;i++)
{
scanf("%ld",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<q;j++)
{
if(arr[i]==arr[j])
{
for(k=j;k<n;k++)
{
arr[k]=arr[k+1];
}
q--;
j--;
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<q-1;j++)
{
if(arr[j]<arr[j+1])
{
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
if(q>2)
{
printf("%ld",arr[2]);
n1=2;
p=arr[2];
}
else
{
printf("%ld",arr[0]);
n1=0;
p=arr[0];
}
for(i=0;i<n;i++)
{
if(arr[i]==p&&i!=n1)
{
printf(" %ld",arr[i]);
}
}
}
