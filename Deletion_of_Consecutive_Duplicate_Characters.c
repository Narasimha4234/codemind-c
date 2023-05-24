
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        int c=0;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}
