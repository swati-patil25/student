//div by 3//
#include <stdio.h>
int main()
{
int i;
int num;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(i%3==0){
printf("%d is div by 3",i);
}
printf("\n");

}
return 0;
}
