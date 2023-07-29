//sum of odd number up to number //
#include <stdio.h>
int main()
{	
	int i,num,sum;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	if(i%2!=0){
	sum=sum+i;
	}
	}
	printf("sum:%d",sum);
	printf("\n");
return 0;
}
