// feboncci serise//
#include <stdio.h>
int main()
{
	int s,m,i,n;
	printf("enter the number");
	scanf("%d",&n);
	   i=0;
	   s=0;
	   m=1;
	      while(i<=n)
	      {
	      printf("%d",i);
	      printf("\n");
	      s=m;
	      m=i;
	      i=s+m;
	      }
	      return 0;
}
