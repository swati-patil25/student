// sum and average an array//
  #include <stdio.h>
     int main()
     {
        int n,m,sum,ave;
         printf("enter the number n = ");
           scanf("%d",&n);
              int arr[n];
              for (int i=0;i<n;i++)
              {
                 printf("enetr the elements =");
                   scanf("%d",&m);
                   arr[i] = m;
              }
                     for(int i=0;i<n;i++)
                     {
                        sum = sum + arr[i];
                        ave = sum/n;
                     }
                     printf("sum = %d\nave = %d\n",sum,ave);
                       return 0;
                  
      }
                     
