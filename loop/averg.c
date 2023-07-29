//sum and average//
#include <stdio.h>
int main()
{
	int sum,i,n,avg,m;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	    for(i=1;i<=n;i++)
	    {
	    scanf("%d",&m);
	    sum=sum+m;
	    }
	    printf("sum=%d\n",sum);
	    avg=sum/n;
	    printf("avg=%d",avg);
	    printf("\n");
	    return 0;
}
