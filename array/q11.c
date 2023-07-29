//natural number in reverse order//
#include <stdio.h>
int main() 
{
    int n;
    printf("enter the number n = ");
    scanf("%d", &n);

    int arr[n];
     for(int i=0;i<n;i++)
    {
       arr[i] = i+1;
    }
      for(int i=n-1;i>=0;i--)
    {
      printf("%d\n",arr[i]);
    }
        return 0;
 }
