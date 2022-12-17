#include<stdio.h>
int main()
{
    int n,i,j,f=0,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    for(i=min;i>=1;i--)
    {
        f=0;
        for(j=0;j<n;j++)
    {
        if(a[j]%i!=0)
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        printf("%d",i);
        break;
    }
    }
}
