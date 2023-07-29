// perfect number an array //
   #include <stdio.h>
   int main()
   {
      int n;
      printf("enter the number n =");
        scanf("%d",&n);
       int c=1;
       int arr[n];
       int m = 0;
       for(int i=0;i<n;i++)
       {
          int s= 0;
          for(int j=1;j<c;j++)
          {
             if (c % j==0)
             {
                s=s+j;
             }
          }
          if(s==c)
          {
             arr[m]=c;
             m++;
          }
          c=c++;
        }
          for(int i=0;i<m;i++)
          {
             printf("%d\n",arr[i]);
          }
          return 0;
   }
          
