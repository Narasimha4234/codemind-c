#include<stdio.h>
int main()
{
    int n,sq1,sq2,r,rsq2,temp,rev;
    scanf("%d",&n);
    sq1=n*n;
    temp=n;
    rev=0;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    sq2=rev*rev;
    temp=sq2;
    rev=0;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    rsq2=rev;
    if(sq1==rsq2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}