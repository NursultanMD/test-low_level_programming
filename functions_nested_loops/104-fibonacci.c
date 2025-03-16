#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, temp;
	unsigned long int a1, a2, b1, b2, temp1, temp2;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
		if (a > 10000000000 || b > 10000000000) /* Разделение чисел */
		{
			a1 = a / 10000000000;
			a2 = a % 10000000000;
			b1 = b / 10000000000;
			b2 = b % 10000000000;

			temp1 = a1 + b1;
			temp2 = a2 + b2;

			if (temp2 >= 10000000000) /* Обрабатываем перенос */
			{
				temp1 += 1;
				temp2 -= 10000000000;
			}

			printf(", %lu%010lu", temp1, temp2);

			a1 = b1;
			a2 = b2;
			b1 = temp1;
			b2 = temp2;
		}
		else
		{
			temp = a + b;
			printf(", %lu", temp);
			a = b;
			b = temp;
		}
	}

	printf("\n");
	return (0);
}
