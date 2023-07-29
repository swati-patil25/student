// find the prime number  up to n //
   #include <stdio.h>
     int main()
     {
         int n,m,c;
         printf("enter the number n=");
           scanf("%d%d",&n,&m);
  
             for(int i=m;i<=n;i++)
       {
             c=0;
	   for(int j=1;j<=i;j++)
	   {
	    	if(i%j==0)
	   	{
	    	  c=c+1;
	   	}
	   }
	      if(c==2)
	   {
	         printf("prime:%d",i);
	        printf("\n");
	   }

	}
	   return 0;
     }
