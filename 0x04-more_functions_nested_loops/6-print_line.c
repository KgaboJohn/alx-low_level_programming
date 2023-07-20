#include "main.h"

/**
 * print_liine - prints shortest distance between two points is a straight line
 * @n: Number of time the charcter '_' will be printedi
 * Return: void
 */
void print_line(int n)
{
	if (n < 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
