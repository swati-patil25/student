//   armstrong number up to n//
   #include <stdio.h>
   # include <math.h>
   int main()
   {
      int n,c,p,b,m,s,j;
       printf("enter the numebr n =");
         scanf("%d",&n);
           int a=1;
           for(int i=1;i<=n;i++)
        {
                c=0,j=a;
                while(j>0)
                {
                   p=j%10;
                   c=c+1;
                   j=j/10;
                }
              m=a,s=0;
             while(m>0)
             {
               b= m % 10;
               s= s + pow(b,c);
               m= m /10;
             } 
              if(s==a)
             {
                printf("%d\n",a);
             }  
             a=a+1;
         }
         return 0;
    }
