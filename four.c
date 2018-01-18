#include<stdio.h>
void main()
{ char n;
printf("enter a character\n");
scanf("%c",&n);
if((n>='a' && n<='z') || (n>='A' && n<='Z'))
{
	printf("Alphabet");
}
else
{
printf("no");
}
}
