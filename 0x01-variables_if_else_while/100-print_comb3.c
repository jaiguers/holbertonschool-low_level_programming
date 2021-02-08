#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Alaways (Success)
**/
int main(void)
{

	int j = 0;
	int i;

	while (j <= 9)
	{
		for (i = j; i < 10; i++)
		{
			if (j != i)
			{
				putchar(j + '0');
				putchar(i + '0');
			}
			if (i > 0 && j != 9 && i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		j++;
	}
	putchar('\n');
	return (0);
}
