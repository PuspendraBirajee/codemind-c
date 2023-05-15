#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200];
    int c=0;
    scanf("%[^
]s",s1);
    for(int i=0; s1[i]!=NULL; i++)
    {
        int x=s1[i]-'0';
        if(x>=0 && x<=9)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",c);   
    }
}