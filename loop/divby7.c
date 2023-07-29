// div by 7 up to n//
#include <stdio.h>
int main()
{
int i,num;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(i%7==0){
printf("%d",i);
printf("\n");
}
}
return 0;
}
