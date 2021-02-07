#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
**/
int main(void)
{
	int alpha = '0';
	int hexa = 'a';

	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
	}
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
