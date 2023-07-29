// prime number//
#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter the number");
	scanf("%d",&n);
	c=0;
	   for(i=1;i<=n;i++)
	   {
	   if(n%i==0){
	   c=c+1;
	   }
	   }
	      if(c==2)
	   {
	         printf("prime:%d",n);
	        printf("\n");
	   }
	   else 
	   {
	   printf("not prime number");
	   printf("\n");
	   }
	   return 0;
}
