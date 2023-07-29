// perfect number square up to n//
    #include <stdio.h>
    int main()
    {
       int n;
       printf("enter the number n =");
         scanf("%d",&n);
            for(int i=1;i<=n;i++)
         {
               for(int j=1;j<=i;j++)
               {
                   if(j*j==i)
                   {
                      printf("perfect squar = %d\n",i);
                   }
                }
           }
           return 0;
       }
