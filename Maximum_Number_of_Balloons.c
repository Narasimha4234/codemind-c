
#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int b=0,a=0,l=0,o=0,n=0,san;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='b')
        {
            b++;
        }
        if(s[i]=='a')
        {
            a++;
        }
        if(s[i]=='l')
        {
            l++;
        }
        if(s[i]=='o')
        {
            o++;
        }
        if(s[i]=='n')
        {
            n++;
        }
    }
    san=0;
    while(b>0 && a>0 && l>0 && o>0 && n>0)
    {
        b-=1;
        a-=1;
        l-=2;
        if(l<0)
        {
            break;
        }
        o-=2;
        if(o<0)
        {
            break;
        }
        n-=1;
        san++;
    }
    printf("%d",san);
}   
