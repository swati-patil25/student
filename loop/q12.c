//sum of all prime number //
  #include <stdio.h>
  int main()
  {
    int n;
      printf("enter the number n=");
        scanf("%d",&n);
           int sum=0;
           for(int i=1;i<=n;i++)
           {
              int c=0;
              for(int j=1;j<=i;j++)
              {
                 if(i%j==0)
                 {
                   c=c+1;
                  } 
               }
                  if(c==2)
                  {
                     sum=sum+i;
                     printf("prime = %d\n",i);
                   }
             }
             printf("sum  = %d\n",sum);
             return 0;
   }
