#include<stdio.h>
int main()
{
    int n,temp,rem,i,fact,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        fact=1;
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}