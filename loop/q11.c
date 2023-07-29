//find max //
  #include <stdio.h>
   int main()
  {
    int n,m;
     printf("enter the number n =");
       scanf("%d",&n);
       int max =0;
         for(int i=1;i<=n;i++)
         {
            scanf("%d",&m);
              if(m>max)
              {
                max=m;
                }
         }
          printf("max = %d\n",max);
          return 0;
    }
