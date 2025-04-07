#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	/* Находим длину строки */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Печатаем строку в обратном порядке */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
