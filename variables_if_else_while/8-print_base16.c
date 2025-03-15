#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n'); /* Вывод новой строки */

	return (0);
}
