#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int x,sum=0;
    scanf("%[^
]s",s1);
    for(int i=0; s1[i]!=NULL; i++)
    {
       x=s1[i]-'0';
       if(x>=0 && x<=9)
       {
           sum=sum+x;
       }
    }
    printf("%d",sum);
}