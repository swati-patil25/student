//div//
#include<stdio.h>
int main()
{
int i,num,div;
printf("enter the num");
scanf("%d",&num);
div=1;
for(i=1;i<=num;i++){
div=div / i;
printf("%d",div);
printf("\n");
}
return 0;
}
