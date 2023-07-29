//second max  between 3 number//
#include <stdio.h>
int main ()
{
	int n,m,i,max,smax;
	printf("enter the number");
	scanf("%d%d",&n,&smax);
		for(i=1;i<=n;i++)
		{
		scanf("%d",&m);
		    if (m>max)
		    {
		         max=m;
		        smax=max;
		    }
		    else if
		      ( m>smax)
		   {
		   smax=smax;
		   }
		   else 
		   {
		      smax=m;
		   }
		   }
		   printf("smax:%d",smax);
		   printf("\n");
		   return 0;
}
		
