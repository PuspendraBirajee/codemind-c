#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='1')
        {
            c+=1;
        }
    }
    printf("%d",c);
}