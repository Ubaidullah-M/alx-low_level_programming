#include "main.h"
/**
 * print_alphabet_x10 - prints a - z 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int c;
	int x;

	x = 0;
	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		x++;
		_putchar("\n");
	}
}
