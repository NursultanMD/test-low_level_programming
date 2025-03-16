#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *        without using arrays, pointers, or long long.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int count;
	unsigned int a1 = 1, a2 = 2;
	unsigned int b1 = 0, b2 = 0;
	unsigned int sum1, sum2;
	
	printf("%u, %u", a1, a2);

	for (count = 3; count <= 98; count++)
	{
		if (a2 > 4000000000) /* Разбиваем число, чтобы избежать переполнения */
		{
			b1 = a1;
			b2 = a2;
			a1 = b1 / 1000000000;
			a2 = b1 % 1000000000;
			b1 = b2 / 1000000000;
			b2 = b2 % 1000000000;
		}

		sum1 = a1 + b1;
		sum2 = a2 + b2;

		if (sum2 > 999999999) /* Обрабатываем перенос */
		{
			sum1 += 1;
			sum2 %= 1000000000;
		}

		printf(", %u", sum1);
		if (sum2 > 0)
			printf("%09u", sum2);

		a1 = b1;
		a2 = b2;
		b1 = sum1;
		b2 = sum2;
	}

	printf("\n");
	return (0);
}
