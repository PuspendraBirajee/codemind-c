#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d%d",&l,&n);
    while(n>0)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w>=l&&h>=l)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        n=n-1;
    }
}