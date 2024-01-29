#include <stdio.h>
#include<conio.h>

void main()
{
	int uppercase_vowel , lowercase_vowel;
	char c;
	clrscr();
	printf("Enter a character: ");
	scanf("%c", &c);

	uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

	if (isalpha(c))
	{
		printf("%c is an alphabet.\n", c);
		if(uppercase_vowel||lowercase_vowel)
			printf("%c is vowel.",c);
		else
			printf("%c is not vowel.",c);
	}
	else
		printf("%c is not an alphabet.", c);

	getch();

}