#include<stdio.h>
int pal(int);
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(!pal(a[i]))
       {
           c++;
       }
    }
    if(c==0)
    {
        printf("1");
    }else{
        printf("0");
    }
}
int pal(int n)
{
    int r,rev=0,t;
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    {
        return 1;
    }else{
        return 0;
    }
}