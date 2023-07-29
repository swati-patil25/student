// sum of any given number//
	#include <stdio.h>
	int main()
{
	int i,a,n,sum;
	sum=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  scanf("%d",&a);
	    sum=sum+a;
	}
	    printf("sum:%d",sum);
	    printf("\n");
	 return 0;
}
