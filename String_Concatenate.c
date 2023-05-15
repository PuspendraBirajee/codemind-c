#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[200];
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    for(int i=0; i<strlen(s1); i++)
    {
        for(int j=i+1; j<strlen(s1); j++)
        {
           if(s1[i]>s1[j])
           {
               int temp = s1[i];
               s1[i]=s1[j];
               s1[j]=temp;
           }
        }
    }
    printf("%s",s1);
}