#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
**/
int main(void)
{
	char letter = 'a';
	char limit = 'z';
	while (letter <= limit)
	{
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			limit = 'Z';
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
