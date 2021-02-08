#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Alaways (Success)
**/
int main(void)
{
	int j = 0;

	while (j <= 99)
	{
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (j != 99)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
	return (0);
}
