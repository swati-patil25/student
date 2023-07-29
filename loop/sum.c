// sum//
#include <stdio.h>
int main()
{
int i,sum,num;
sum=0;
printf("enter the num");
scanf("%d",&num);
for(i=1;i<=num;i++){
sum=sum+i;
}
printf("sum:%d",sum);
printf("\n");
return 0;
}
