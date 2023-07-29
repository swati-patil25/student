// given array 1,2,3,4,5,6,7,8,9,take a number from the user and cheke wheter it exists or not//
  #include <stdio.h>
  int main()
  {
     int n;
     printf("enter the number n=");
     scanf("%d",&n);
     int arr[]={1,2,3,4,5,6,7,8,9};
       for(int i=0;i<8;i++)
       {
         if(arr[i]==n)
         {
            printf("exsts = %d\n",n);
         }
       }
       
       return 0;
    }
