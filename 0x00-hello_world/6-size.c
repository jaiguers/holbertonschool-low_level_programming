#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %j byte(s)\n", sizeof(char));
printf("Size of an int: %j byte(s)\n", sizeof(int));
printf("Size of a long int: %j byte(s)\n", sizeof(long));
printf("Size of a long long int: %j byte(s)\n", sizeof(long long));
printf("Size of a float: 4 byte(s)\n", sizeof(float));
return (0);
}
