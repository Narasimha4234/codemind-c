
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l;
    l=strlen(s);
    if(s[0]=='(' && s[l-1]==')')
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
