// convert binary to decimal//
#include <stdio.h>
int main()
{
	int s,p,n,r;
	printf("enter the number");
	scanf("%d",&n);
	s=0;
	p=1;
	   while (n>0)
	   {
	   r=n%10;
	   s=s+r*p;
	   p=p*2;
	   n=n/10;}
	   printf("%d",s);
	   printf("\n");
	   return 0;
}
	   
