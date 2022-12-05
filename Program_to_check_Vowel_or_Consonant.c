#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='A'||n=='a'||n=='E'||n=='e'||n=='I'||n=='i'||n=='O'||n=='o'||n=='U'||n=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}