#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
**/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
