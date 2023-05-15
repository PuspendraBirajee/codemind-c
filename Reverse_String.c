#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%[^
]s",s1);
    int l=strlen(s1);
    for(int i=0; i<l/2; i++)
    {
        int temp= s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=temp;
    }
    printf("%s",s1);
}