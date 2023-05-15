#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int sum=0;
    for(int i=0; ch[i]!=NULL; i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            sum = sum +(ch[i]-'0');
        }
    }
    printf("%d",sum);
}