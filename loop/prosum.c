// product of number same//
#include <stdio.h>
int main()
{
	int i,p,sum,n,m;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	p=1;
	for(i=1;i<=n;i++)
	{
	scanf("%d",&m);
	p=p*m;
	printf("%d\n",p);
	sum=sum+p;
	}
	printf("sum:%d",sum);
	printf("\n");
	return 0;
}
