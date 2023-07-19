#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int ch;
	char i;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
