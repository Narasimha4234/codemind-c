#include<stdio.h>
int pal(int n)
{
	 int rev = 0, remainder;
    
    while (n != 0)
	 {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
   
    return rev;
}
int main()
{
	int a;
	scanf("%d",&a);
    do
    {
    	a=a+pal(a);
	}while(a!=pal(a));
	printf("%d",a);
	

}

