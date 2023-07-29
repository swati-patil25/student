// find the all prime factors of a given numbber//
  #include <stdio.h>
    int main()
    {
       int n,c;
        printf("enter the number n =");
          scanf("%d",&n);
            for(int i=1;i<=n;i++)
        {
            if(n%10==0)
            {
                 c=0;
              for(int j=1;j<=i;j++)
              {
                  if(i%j==0)
                  {
                    c=c+1;
                  }
               }
                 if(c==2)
                 {
                    printf("%d\n",i);
                 }
              }
          }
          return 0;    
  
  }
