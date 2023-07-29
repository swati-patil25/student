//total sum //
#include <stdio.h>
int main ()
{
	int sum,a,i,n;
	printf("enter the number");
	scanf ("%d",&n);
	  for(i=1;i<=n;i++)
	  {
	  scanf("%d",&a);
	  sum=sum+a;
	  }
	  printf("sum=%d",sum);
	  printf("\n");
	  return 0;
}
