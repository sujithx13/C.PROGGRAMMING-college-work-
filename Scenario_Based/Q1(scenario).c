#include<stdio.h>
int main()
{
	int actprc,discprc;
	printf("Enter the price");
	scanf("%d",&actprc);
	
	printf("The actual price is:%d,\n", actprc);
	printf("discount=10 percent\n");
	discprc=actprc-actprc/10;
	printf("the dicscounted price is:%d",discprc);
	return 0;
	
}