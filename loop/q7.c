//  palindron number//
  #include <stdio.h>
  int main ()
  {
     int n,j,s;
       printf("enter the number n =");
          scanf("%d",&n);
           for(int i=1;i<=n;i++)
       {
                s=0; 
                j=i;
             while(j>0)
             {
                    int a=j%10;
                    s= s * 10+a;
                   j= j/10;
             }
                  if(s==i)
               {
                  printf("i = %d\n",i);
               }
        }
           return 0;
    }
