#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int c=1;
    scanf("%[^
]s",s1);
    for(int i=1; s1[i]!=NULL; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}