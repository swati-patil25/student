// whole number //
   #include <stdio.h>
   int main()
   {
      int n ;
       printf("enter the number n =");
         scanf("%d",&n);
          int arr[n];
            for(int i=0;i<=n;i++)
            {
               arr[i]=i;
            }
              for(int i=0;i<=n;i++)
             {
                printf("%d\n",arr[i]);
             }
                   return 0;
    }
