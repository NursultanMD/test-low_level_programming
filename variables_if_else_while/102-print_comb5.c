#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0'); /* Первая цифра первого числа */
			putchar((num1 % 10) + '0'); /* Вторая цифра первого числа */
			putchar(' ');
			putchar((num2 / 10) + '0'); /* Первая цифра второго числа */
			putchar((num2 % 10) + '0'); /* Вторая цифра второго числа */

			if (!(num1 == 98 && num2 == 99)) /* Исключаем запятую после "98 99" */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n'); /* Вывод новой строки */

	return (0);
}
