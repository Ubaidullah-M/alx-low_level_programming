#include "main.h"
/**
 * print_alphabet - print a to z
 *
 * Description: printing alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = a; alphabet <= z; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar("\n");
}
