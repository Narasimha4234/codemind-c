
#include<stdio.h>
int main()
{
    int r,n,temp,no,rev=0,sum1=0,rev1=0,sum2=0,count=0;
    scanf("%d%d",&n,&no);
    temp=n;
    count=no;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp/=10;
    }
    while(n>0)
    {
        r=n%10;
        if(count==0)
        {
            break;
        }
        sum1=(sum1*10)+r;
        n/=10;
        count--;
    }
    count=no;
    while(rev>0)
    {
        r=rev%10;
        if(count==0)
        {
            break;
        }
        sum2=(sum2*10)+r;
        rev/=10;
        count--;
    }
    while(sum1>0)
    {
        r=sum1%10;
        rev1=(rev1*10)+r;
        sum1/=10;
    }
    if(rev1>sum2)
    {
        printf("%d",rev1-sum2);
    }else{
        printf("%d",sum2-rev1);
    }
    return 0;
}

