#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
 **/
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
