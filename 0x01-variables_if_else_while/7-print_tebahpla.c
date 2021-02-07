#include <stdio.h>
/**
* main - Point entry
*
* Return: 0 Always (Success)
**/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
