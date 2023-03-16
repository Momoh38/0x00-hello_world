#include "main.h"

/**
<<<<<<< HEAD
*print_numbers - print 0 - 9
=======
*print_numbers - print 0123456789
>>>>>>> f981a38b26b7494284421d540da348d906f9eb87
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
