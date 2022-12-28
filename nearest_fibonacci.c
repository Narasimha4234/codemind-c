#include<stdio.h>
int main()
{
    int n,a=0,b=1,next=0;
    scanf("%d",&n);
    while(n>next)
    {
        next=a+b;
        a=b;
       b=next;
    }
    if(n-a<b-n)
    {
        printf("%d",a);
    }
    else if(n-a==b-n)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d",b);
    }
}