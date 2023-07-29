// student accept marks of three sub and calculate the parcentage  of student and who is the topper //
   #include <stdio.h>
     int main()
     {
         int n,c,s,p,m;
           printf("enter the number n =");
             scanf("%d",&n);
               int max=0;
               c=0;
             for(int i=1;i<=n;i++)
             {
                s=0;
                int max=0;
                 for(int j=1;j<=3;j++)
                 {
                     scanf("%d",&m);
                       s=s+m;
                 }
                   p= 100*((float)s/300);
                    if(p>max)
                      {
                        max =p;
                          c=c+1;
                      }
              }
              printf("Topper=%d p:%d\n", c,p);
                return 0;
      }

               
