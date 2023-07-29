// 1+11+111+1111+11111//
#include <stdio.h>
int main()
{
	int sum,i,n,a;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	   for(i=1;i<=n;i++)
	   {
	   a=sum+i*10+1;
	   sum=sum+a;
	   }
	   printf("sum:%d",sum);
	   printf("\n");
	   return 0; 
}
