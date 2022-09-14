#include "main.h"
/**
 * print_to_98 - printing natural num 0 - 98
 *
 * @n: int n the starting point
 *
 * Return: Always 0
 */
void print_to_98(void)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			_putchar(n);
			_putchar(98);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar(n);
			_putchar(98);
		}
	}
}
