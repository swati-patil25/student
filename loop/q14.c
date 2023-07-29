// co-prime  given serice//
  #include <stdio.h>
  int main()
  {
     int n,s,m;
       printf("enter the number n = ");
        scanf("%d",&n);
           for(int i=1;i<=n;i++)
           {
              printf("enter two number");
               scanf("%d%d",&s,&m);
                 int r = s % m;
               
                 while (r != 0)
             {
                 s = m;
                 m = r;
                 r = s % m;
              }
                 int hcf = m;
                 if (hcf == 1)
                 {
                     printf("co-prime = %d %d\n",s,m);
                 }
           } 
                return 0;
  } 
                      
