// find the third max//
   #include <stdio.h>
     int main()
     {
        int n;
          printf("enter the number n=");
            scanf("%d",&n);
            int m;
              int smax=0, max=0, tmax=0;
                for(int i=1;i<=n;i++)
                {
                   scanf("%d",&m);
                   if(m>max)
                   {
                      tmax=smax;
                      smax=max;
                      max=m;
                    }
                    else if(m>smax)
                    {
                      tmax=smax;
                      smax=m;
                    }
                      else if (m>tmax)
                      {
                      tmax=m;
                      }
                      
                      
                 }
              printf("tmax=%d\n",tmax);
              return 0;
      }
