#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * main - sum even fibonacci numbers under 4 million.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
int main(void)
{
	int i;
	char c;
	unsigned long count, i, j, k, sums;

	for (i = 0; i < 10; ++i)
		i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			_putchar(c);
			sums += k;
		}
		_putchar('\n');
	}
	printf("%lu\n", sums);
	return (0);
}
