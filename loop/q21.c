// prime twisted not prime twisted //
  #include <stdio.h>
    int main()
    {
       int n,a;
        printf("enter thr number n =");
          scanf("%d",&n);
             for(int i=1;i<=n;i++)
             {
                int c=0;
                for(int j=1;j<=i;j++)
                {
                    if(i%j==0)
                    {
                       c=c+1;
                     }
                 }
                 if(c==2)
                {
                    a=i;
                }
                    int s= 0;
                    while(a>0)
                    {
                       int p=a%10;
                      int  s =s*10+p;
                       a=a/10; 
                    int b=0;
                    int t=s;
                     for(int i=1;i<=t;i++)
                    
                    {
                        if(t%i==0)
                        {
                           c=c+1;
                        if(b==2)
                        
                     {
                       printf("twised = %d\n", i);
                     }
                     else
                     {
                        printf("not twisted = %d\n",i);
                      }
                 }
               }
             }
          }
                     return 0;
      }
                     
                     
