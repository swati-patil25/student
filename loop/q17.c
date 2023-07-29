// hcf lcm given serice//
    #include <stdio.h>
      int main()
      {
         int n,m,s,hcf,lcm,k,g;
         printf("Enter the number n =");
           scanf("%d",&n);
              for(int i=1;i<=n;i++)
              {
                  scanf("%d%d",&m,&s);
                     int p = m*s;
                     k=m;
                     g=s;
                    
                     while(s !=0)
                 {
                      int r = k%g;
                      k=m;
                      g=r;
                 }
                    hcf=m;
                    lcm=p/hcf;
                      printf("hcf = %d\n lcm = %d\n",hcf,lcm);
             }
             return 0;
       }
