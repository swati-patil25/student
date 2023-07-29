// find the perfect number up to n//
   #include <stdio.h>
     int main()
   {
     int n,sum,m;
       printf("enter the number n =");
         scanf("%d%d",&m,&n);
           for(int i=m;i<=n;i++)
        {
              sum=0;
              for(int j=1;j<i;j++)
             {
                if(i%j==0)
                {
                   sum=sum+j;
                }   
                 
           }
            if(sum==i)
                  {
                     printf("perfect = %d\n",i);
                  }
         }
              return 0;
     }
