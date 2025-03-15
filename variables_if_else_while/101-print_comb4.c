#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third <= 9; third++)
			{
				putchar(first + '0');  /* Первая цифра */
				putchar(second + '0'); /* Вторая цифра */
				putchar(third + '0');  /* Третья цифра */

				if (first != 7 || second != 8 || third != 9) /* Исключаем запятую после 789 */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n'); /* Вывод новой строки */

	return (0);
}
