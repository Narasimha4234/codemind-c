#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int z[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }
    for(i=0;i<n;i++)
    {
        if(z[i]%2!=0)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
}