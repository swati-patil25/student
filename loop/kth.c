// sum of the kth power//
#include <stdio.h>
#include <math.h>
int main()
{
	int sum,k,i,n,p;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	   for (i=1;i<=n;i++)
	   {
	   p=pow(3,i);
	   printf("%d=%d\n",i,p);
	   sum=sum+p;
	   }
	   printf("sum=%d",sum);
	   printf("\n");
	   return 0;
}
