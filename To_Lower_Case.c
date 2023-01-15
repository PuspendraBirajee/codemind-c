#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
}