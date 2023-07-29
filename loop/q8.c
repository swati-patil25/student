   // happy number //
     #include <stdio.h>
     int main()
      {
        int n,c;
          printf("enter the number n =");
          scanf("%d",&n);
             for(int i=1;i<=n;i++)
             {
                 int j=i;
                 int s=0;
                 while(j>0)
                 {
                    int r=j%10;
                    s= s+r*r;
                    j=j/10;
                 
                     if(s==1)
                    {
                         printf("happy = %d\n",i);
                    }
                    c=c+1;
                    if(c<=s)
                    {
                       j=s;
                    }
                 }
          }
              
              return 0;
      }
