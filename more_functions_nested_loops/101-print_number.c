#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n == -2147483648) /* Обрабатываем INT_MIN отдельно */
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648); /* Выводим оставшуюся часть */
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
