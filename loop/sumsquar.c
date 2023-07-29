// sum of squar of natural number that are div by 3//
#include <stdio.h>
#include <math.h>
int main()
{
	int sum,i,n,m,k;
	printf("enter the number");
	scanf("%d",&n);
	m=2;
	for(i=1;i<=n;i++)
	{
	if(i%3==0)
	{
	k=pow(i,m);
	printf("%d=%d",i,k);
	printf("\n");
	sum=sum+k;
	}
	}
	printf("sum:%d",sum);
	printf("\n");
	return 0;
}
	
