#include<stdio.h>
int main()
{
    int a=0,i,c,b=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
