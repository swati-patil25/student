// acceptn two number and dispiay sum of even number between them//
#include <stdio.h>
int main()
{
	int i,sum,n;
	printf("enter the two number");
	scanf("%d%d",&i,&n);
	   i=i;
	   sum=0;
	   while(i<=n)
	   {
	   if(i%2==0)
	   {
	   sum=sum+i;
	   }
	   i=i+1;
	   }
	   printf("%d",sum);
	   printf("\n");
	   return 0;
}
	   
