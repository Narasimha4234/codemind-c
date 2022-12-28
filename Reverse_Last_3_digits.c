#include<stdio.h>
int main()
{
    int n,a,b,c,rev=0,r;
    scanf("%d",&n);
    a=n%1000;
        b=n/1000;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    c=rev;

    printf("%d%d",b,c);
}