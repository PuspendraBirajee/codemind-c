#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(x==w||y==w||z==w||x+y==w||y+z==w||x+z==w||x+y+z==w)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}