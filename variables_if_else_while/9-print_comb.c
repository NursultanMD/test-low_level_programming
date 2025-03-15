#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Вывод цифры */

		if (num < 9) /* Добавляем ", " только если не последняя цифра */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n'); /* Вывод новой строки */

	return (0);
}
