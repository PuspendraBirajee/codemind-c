# include<stdio.h>
int main()
{
    int n,c=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0; i<n; i++)
    {
        if(a[i]>x)
        {
            c++;
        }
        else 
        {
            f++;
        }
    }
    printf("%d",2*c+f);
    
  
}
