#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x && a<y)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}