#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0'); /* Выводит десятки */
			_putchar((j % 10) + '0'); /* Выводит единицы */
		}
		_putchar('\n');
	}
}
