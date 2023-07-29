//perfect number//
#include <stdio.h>
int main()
{
	int i,n,k,sum;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	k=n;
	i=1;
	while(i<n)
	{
	 if(n%i==0)
	{
	    	printf("fac:%d",i);
		printf("\n");
		sum=sum+i;
		//i=i+1;
	}
	i++;
	}
         if (sum==k)
	{
	   	printf("perfect");
	   	printf("\n");
	}
	 else
	{
		printf("not perfect");
		printf("\n");
	}
	
	return 0;
}
