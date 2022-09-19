#include "main.h"

/**
 * rev_string - prints a reverse string
 *
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start_x, *end_x, x;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	count = length;
	start_x = s;
	end_x = s;
	for (i = 0; i < count - 1; i++)
	{
		end_x++;
	}
}
