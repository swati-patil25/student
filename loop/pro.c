//product of given integer//
#include <stdio.h>
int main()
{
	int i,n,a,p;
	printf("enter the number");
	scanf("%d",&n);
	p=1;
	  for(i=1;i<=n;i++)
	  {
	  scanf("%d",&a);
	     p=p*a;
	     printf("p:%d",p);
	     printf("\n");
	  }
	  return 0;
}
