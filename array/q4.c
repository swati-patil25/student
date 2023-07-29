// array and  it's size print altenate elements from last //
#include <stdio.h>
int main()
   {
          int  n,m;
        printf("enter the number  =");
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++)
        {
            printf("enter the elements = ");
          scanf("%d",&m);
            arr[i]=m;
        }
            for(int i=0;i<n;i=i+2)
        {
           printf("%d\n",arr[i]);
        }
         return 0;
     }
  
