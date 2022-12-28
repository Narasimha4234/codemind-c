#include<stdio.h>
int main()
{
   int n,temp,i,j,x,y;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   for(i=1;i<n;i++)
   {
     for(j=0;j<(n-i);j++)
     {
         if(arr[j]>arr[j+1])
         {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
     }
   }
   if(n%2!=0)
   {
       x=(n+1)/2;
       printf("%d",arr[x-1]);
   }
   else
   {
       y=n/2;
       printf("%d",arr[y]);
   }
}