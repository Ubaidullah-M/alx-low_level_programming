#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int count;
	long int a = 1;
	long int b = 2;
	long int c;

	printf("%lu, ", a);
	for (count = 2; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}
		c = b;
		b += a;
		a = c;
		count++;
	}
	return (0);
}
