#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    int a[n],i;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            printf("PROFIT
");
        }
        else if(x==y)
        {
            printf("NEUTRAL
");
        }
        else if(x>y)
        {
            printf("LOSS
");
        }
    }
}