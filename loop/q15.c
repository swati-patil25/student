// strong number //
   #include <stdio.h>
   int main()
   {
      int n,r;
       printf("enter the number n =");
         scanf("%d",&n);
           for(int i=100;i<=n;i++)
           {
                 int sum=0;
                 int f=1;
                 int j=i;
                 while(j>0)
               {
                    int r=j%10;
                    f=f*r;
                    j=j/10;
                    if(r>0)
                    {
                       r=r-1;
                    }
                    else 
                    {
                      sum= sum+i;
                    }
                 }
                 if(sum==i)
                 {
                    printf("i = %d\n",i);
                 }
            }
            return 0;
    }
