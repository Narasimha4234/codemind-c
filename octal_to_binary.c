#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int sum=0,k=0,sum1=0;
    while(n)
    {
        sum+=(n%10)*pow(8,k);
        n=n/10;
        k++;
    }
    k=1;
    while(sum)
    {
        sum1+=(sum%2)*k;
        sum=sum/2;
        k*=10;
    }
    printf("%lld",sum1);
}
