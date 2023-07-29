//sum of the even num//
#include <stdio.h>
int main()
{
	int num,i,sum;
	printf("enter the num");
	scanf("%d",&num);
		sum=0;
		for(i=1;i<=num;i++){
			if (i%2==0){
				sum=sum+i;
				}
				}
					printf("sum:%d",sum);
					printf("\n");
return 0;
}
