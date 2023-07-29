// array and  it's size print altenate elements from last  reverse order//
   #include <stdio.h>
     int main()
     {
         int arr[]={5,6,7,8,9,10,2,3,1,4};
         for(int i=9;i>=0;i=i-2)
         {
            printf("%d\n",arr[i]);
         }
         return 0;
         }
