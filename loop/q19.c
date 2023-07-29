// find second max//
   #include <stdio.h>
   int main()
   {
           int n,max,smax,m;
            printf("Enter the number n =");
              scanf("%d%d",&n,&smax);
                for(int i=1;i<=n;i++)
           {
                    scanf("%d",&m);
                    
                         if(m>max)
                         {
                            max = m;
                            smax = max;
                          }
                 else if(m>smax)
                 {
                    smax = smax;
                 }
                    else 
                    {
                        smax = m;
                     }
            }
                 printf("smax = %d\n",smax);
                return 0;
    }
