#include<stdio.h>
main()
{
	int number=0;
	printf("enter the number");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("EVEN NUMBER");
	}
	if(number%2==1)
	{
		printf("odd number");
	}
}