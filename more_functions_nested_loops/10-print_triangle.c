#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (spaces = size - i; spaces > 0; spaces--)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
