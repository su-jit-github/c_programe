#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,div;
	char op;
	printf("ENTER YOUR OPERATER");
	scanf("%c",&op);
	printf("ENTER YOUR 2 OPERAND");
	scanf("%d %d",&a &b);
	if(op=='+')
	{
		sum=a+b;
		printf("ADDITION IS :%d",sum);
	}
	else if(op=='-')
	{
		sub=a-b;
		printf("substraction is :%d",sub);
	}
	else if(op=='*')
	{
		mul=a*b;
		printf("multification is :%d",mul);
	}
	else if(op=='/')
	{
		div=a/b;
		printf("division is :%d",div);
	}
	else
	{
		printf("PLEASE ENTER VALID OPERATOR");
	}
}