// num div by 3 print nav,num div by 6 print gurukul  num div by both print navgurukul//
#include <stdio.h>
int main()
{
	int i,num;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	if(i%3==0&& i%6==0){
	printf("%s","navgurukul");
	printf("\n");
	}
	if(i%3==0){
	printf("%s","nav");
	printf("\n");
	}
	if(i%6==0){
	printf("%s","gurukul");
	printf("\n");
	}
	}
return 0;
}
