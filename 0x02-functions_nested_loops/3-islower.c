#include "main.h"
/**
 * _islower - check the code
 *
 * Description: check if 'c' is lower case
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
