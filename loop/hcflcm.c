//hcf lcm//
#include <stdio.h>
int main()
{
	int p,m,n,r,hcf,lcm;
	printf("enter the number ");
	scanf("%d%d",&m,&n);
	  p=m*n;
	  
	  while(n!=0)
	  {
	  	r=m%n;
	  	m=n;
	  	n=r;
	  }
	  //printf("%d",m);
	  hcf=m;
	  lcm=p/hcf;
	  printf("hcf=%d\nlcm=%d",hcf,lcm);
	  printf("\n");

	  return 0;
}
