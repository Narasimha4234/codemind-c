#include <stdio.h>
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
	int i,a,b;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(pal(i)==i)
	       printf("%d ",pal(i));
	}
	
}

