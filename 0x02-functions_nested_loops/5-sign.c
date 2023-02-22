#include "main.h"
/**
 * print_sign - print the sign of a num
 * @n: the num to be checked
 * Return: 1 and print + if 1 is greater than 0
 * 0 and print 0 if n is zero
 * -1 amd print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
