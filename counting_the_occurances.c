#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200];
    int c=0;
    scanf("%[^
]s",s1);
    char s2;
    scanf("%s",&s2);
    for(int i=0; s1[i]!=NULL; i++)
    {
       if(s2==s1[i])
       {
           c++;
       }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",c);
    }
}