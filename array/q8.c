// sum an array//
   #include <stdio.h>
   int main()
   {
      int n,m,sum;
      printf("enter the number n =");
        scanf("%d",&n);
          int arr[n];
          for(int i=0;i<n;i++)
       {
          printf("enter the elements ");
          scanf("%d",&m);
            arr[i]=m;
       }
           for(int i=0;i<n;i++)
           {
                sum = sum + arr[i];
           }
           printf("sum= %d\n",sum);
           return 0;
     }
             
