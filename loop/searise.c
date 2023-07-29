//10 20,30,.......300//
#include <stdio.h>
int main()
{
	int i,n,c,sum;
	printf("enter the number");
	scanf("%d",&n);
	c=10;
	sum=0;
	  for (i=0;i<=n;i++)
	  {
	  sum=i*c;
	  printf("%d",sum);
	  printf("\n");
	  }
	  return 0;
}
