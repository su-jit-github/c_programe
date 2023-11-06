#include<stdio.h>
main()
{
	char ch;
	printf("enter the char");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("IT IS A VOWEL");
	}
	else
	{
		printf("IT IS A CONSONANT");
	}
}