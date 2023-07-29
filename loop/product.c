//product//
#include <stdio.h>
int main ()
{
int i,p,num;
printf("enter the num");
scanf("%d",&num);
p=1;
for(i=1;i<=num;i++){
p=p*i;
}
printf("%d",p);
printf("\n");
return 0;
}
