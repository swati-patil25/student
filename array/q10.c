// prime number up to n//
   #include <stdio.h>
   int main ()
   {
      int n;
      printf("enter the nuber n =");
        scanf("%d",&n);
           int arr[n];
           int a=1;
           int m=0;
             for(int i=0;i<n;i++)
         {
                int c=0;
               for(int j=1;j<=a;j++)
             {
               
                 if( a % j== 0)
                 {
                    c=c+1;
                 }
              }
                  if(c==2)
                  {
                      arr[m] = a;
                      m++;
                      
                  }
                  a++;
           }
             for(int i=0;i<m;i++)
             {
                printf("prime = %d\n",arr[i]);
             }
                  return 0;
       }
