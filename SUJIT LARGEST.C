#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE NUMBER FIRST");
	scanf("%d",&a);
	printf("ENTER THE NUMBER SECOND");
	scanf("%d",&b);
	printf("ENTER THE NUMBER THIRD");
	scanf("%d",&c);
	if(a==b)
	{
		if(a>c)
		{
			printf("a & b is largest");
		}
		else
		{
			printf("c is largest");
		}
	}
	else if(a==c)
	{
		if(a>b)
		{
			printf("a & c is largest");
		}
		else
		{
			printf("b is largest");
		}
	}
	else if(b==c)
	{
		if(b>a)
		{
			printf("b & c is largest");
		}
		else
		{
			printf("a is largest");
		}
	}
	else if(a>b&&a>c)
	{
		printf("YOUR LARGEST NUMBER IS A");
	}
	else if(b>a&&b>c)
	{
		printf("YOUR LARGEST NUMBER IS B");
	}
	else if(c>a&&c>b)
	{
		printf("YOUR LARGEST NUMBER IS C");
	}
}