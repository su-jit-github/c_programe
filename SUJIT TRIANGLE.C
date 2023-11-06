#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("ENTER THE THREE ANGLE");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180 && a>0 && b>0 && c>0)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS NOT VALID");
	}
}