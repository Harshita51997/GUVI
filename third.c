#include<stdio.h>
void main()
{
	char n;
	printf("enter character\n");
	scanf("%c",&n);
	if(n=='a' || n=='e' || n== 'o'|| n== 'u' || n=='i' || n=='A' || n=='E' || n =='O' || n=='U'||n=='I')
	{printf("character is vowel");
	}
	else
	{printf("character is consonant");
	}
}
