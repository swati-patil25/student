//palindrome number//
#include <stdio.h>
int main()
{
	int sum=0,a,n,k;
	
	printf("enter the number");
	scanf ("%d",&n);
	k=n;
	   while(n>0)
	   {
	   	a=n%10;
	   	sum=sum*10+a;
	   	n=n/10;
	   }
	   if (sum==k)
	   {
	   	printf("palindrome");
	   	printf("\n");
	   }
	   else
	   {
	   	printf("not palindrome");
	   	printf("\n");
	   }
	   
	   return 0;
}
	   
