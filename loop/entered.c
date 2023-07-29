display number 231 then outup should be two number entered by user  example three one//
#include <stdio.h>
int main()
{
	int s,r,n,m;
	printf("enter the number ");
	scanf("%d",&n);
	   s=0;
	   if(n>0)
	   {
	   r=n%10;
	   if(r==0)
	   {
	   l="zero";
	   s=l+s;
	   }
	   else if (r==1)
	   {
	   l="one";
	   s=l+l;
	   }
	   else if(r==2)
	   {
	   l="two";
	   s=l+s;
	   }
	   else if (r==3)
	   {
	   l="three";
	   s=l+s;
	   }
	   else if (r==4)
	   {
	   l="four";
	   s=l+s;
	   }
	   else if (r==5)
	   {
	   l="five";
	   s=l+s;
	   }
	   else if (r==6)
	   {
	   l="six";
	   s=l+s;
	   }
	   else if (r==7)
	   {
	   l="seven";
	   s=l+s;
	   }
	   else if (r==8)
	   {
	   l="eight";
	   s=l+s;
	   }
	   else 
	   {
	   l="nine";
	   s=l+s;
	   }
	   n=n/10;
	   }
	   printf("%d",s);
	   printf("\n");
	   return 0;
}
