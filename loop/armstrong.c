//armstrong number//
#include <stdio.h>
#include <math.h>
int main()
{
	int sum,n,p,m;
	m=3;
	printf("enter the number");
	scanf("%d",&n);
	int k=n;
	  for(n=n;n>0;n=n/10)
	  {
	  p=n%10;
	  sum=sum+pow(p,m);
	  }
	   if(sum==k)
	  {
	  printf("armstrong");
	  printf("\n");
	  }
	  else
	  {
	  printf("not armstrong");
	  printf("\n");
	  }
	  return 0;
}
	  
