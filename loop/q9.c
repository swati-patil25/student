// harshad number //
     #include <stdio.h>
       int main()
       {
          int n,j,s,r;
            printf("enter the number n =");
             scanf("%d",&n);
               for(int i=1; i<=n;i++)
               {
                 j=i;
                  s=0;
                 while( j>0)
                 { 
                    r=j%10;
                    s=s+r;
                   j=j/10;
                 }
                   if(i%s==0)
                    {
                       printf("harshad = %d\n",i);
                    }
            }
          
               return 0;
       }
               
