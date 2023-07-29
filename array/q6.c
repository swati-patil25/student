// even number//
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number n=");
      scanf("%d",&n);
      int arr[n];
      int c=2;
      for(int i=0;i<n;i++)
       {
           arr[i]=c;
            c=c+2;
      }
      for(int i=0;i<n;i++)
      {
         printf("%d\n",arr[i]);
         
      }
      return 0;
      }
