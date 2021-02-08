#include "holberton.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0.
 */
int main(void)
{
	char h[] = "Holberton";
	int i = 0;

	while (i <= 8)
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
