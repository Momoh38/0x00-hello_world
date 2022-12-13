#include "main.h"
/**
 * print_alpabets to small letters
 * Return:0
 */
void print_alphabet(void)
{
	char m = 'a';

	while (m <= "z")
	{
		_putchar(m);
		m++;
	}

	_putchar('\n');
}
