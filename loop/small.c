//smallest number//
#include <stdio.h>
int main()
{
	int max,i,n,s;
	int min;
	printf("enter the number");
	scanf("%d%d",&n,&s);
	min=s;
	for(i=1;i<n;i++)
	{
	scanf("%d",&s);
	if(s<min)
	{
	min=s;
	}
	}
	printf("min=%d",min);
	printf("\n");
	return 0;
}
