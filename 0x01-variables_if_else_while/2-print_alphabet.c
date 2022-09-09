#include <stdio.h>
#include <stdlib.h>
/**
 ** main - main entry
 *
 ** Return: Always 0 
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
