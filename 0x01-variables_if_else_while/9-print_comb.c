#include <stdio.h>
/**
* main - Entry poimt
*
* Return: 0 Always (Success)
**/
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
	return (0);
}
