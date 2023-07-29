// find max min //
  #include <stdio.h>
  int main()
  {
       int n ,min ,max,m;
        printf("enter the number n =");
          scanf("%d%d",&n,&min);
              
             for(int i=1;i<=n;i++)
             {
                    scanf("%d",&m);
                if(m > max)
                {
                   max = m;
                }
                 if (m < min)
                {
                    min = m;
                }
             }
                 printf("max = %d\nmin = %d\n",max ,min);
                return 0;
     }
             
  
