#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,x,y,z;
        scanf("%d%d",&a,&b);
        x=a*5;
        y=b*7;
        z=x+y;
        printf("%d
",z);
    }
}