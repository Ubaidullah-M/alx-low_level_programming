#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b;
	int total = 0;
	int c;

	for (b = 2; b < 4000000; b++)
	{
		if (b % 2 == 0)
			total += b;
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", total);
	return (0);
}
