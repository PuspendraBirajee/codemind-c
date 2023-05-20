#include<stdio.h>
int main()
{
int arr[100000],i,j,k,n,t=0,q,brr[100000],size=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
int flag=0;
scanf("%d",&arr[i]);
for(j=0;j<=size;j++)
{
if(arr[i]==brr[j])
{
flag=1;
break;
}
}
if(flag==0)
{
brr[size]=arr[i];
size++;
}
}
q=n;
if(n>=4&&n<100)
{
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(brr[i]>brr[j])
{
t=brr[i];
brr[i]=brr[j];
brr[j]=t;
}
}
}
if(size>=3)
printf("%d",brr[size-3]);
else
printf("It is not possible");
}
else
{
printf("It is not possible");
}
}
