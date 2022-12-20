#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float area,per;
    area=3.14*n*n;
    per=2*3.14*n;
    printf("%.2f
%.2f",area,per);
}