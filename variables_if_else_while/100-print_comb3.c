#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			putchar(first + '0'); /* Выводим первую цифру */
			putchar(second + '0'); /* Выводим вторую цифру */

			if (first != 8 || second != 9) /* Исключаем запятую после 89 */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n'); /* Вывод новой строки */

	return (0);
}
