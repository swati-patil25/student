// factorial number//
# include <stdio.h>
int main()
{
	int i,n,p;
	printf("enter the number");
	scanf("%d",&n);
	p=1;
	  for(i=1;i<=n;i++)
	  {
	  p=p*i;
	  printf("fac=%d",p);
	  printf("\n");
	  }
	  return 0;
}
