
#include <stdio.h>
int main() 
{
    int n, rev = 0, remainder,temp;
    
    scanf("%d", &n);
    temp=n;
    while (n != 0) 
	{
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
     if(rev==temp)
     {
     	printf("True");
	 }
	 else
	 {
	 	printf("False");
	 }
    return 0;
}
