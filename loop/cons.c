// natural number even  div by 7//
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
	  if(i%2==0)
	  {
	  if(i%7==0)
	  {
	  printf("%d",i);
	  printf("\n");
	  }
	  else
	  {
	  }
	  }
	  }
	  return 0;
}
