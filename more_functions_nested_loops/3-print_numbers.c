#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	char nums[] = "0123456789\n";
	int i;

	for (i = 0; nums[i] != '\0'; i++)
		_putchar(nums[i]);
}
