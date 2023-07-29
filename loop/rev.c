// 105,98,91............7//
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	 for(i=105;i>=n;i=i-7)
	 {
	  printf("%d",i);
	  printf("\n");
	  }
	  return 0;
}

