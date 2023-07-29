// gretest among given number//
#include <stdio.h>
int main()
{
	int i,n,m,max;
	printf("enter the number");
	scanf("%d",&n);
	  for (i=1;i<=n;i++)
	  {
	  scanf("%d",&m);
	  if(m>max){
	  max=m;
	  }
	  }
	  printf("max:%d",max);
	  printf("\n");
	  return 0;
}
