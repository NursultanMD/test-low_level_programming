#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* Находим длину строки */
	while (s[end] != '\0')
	{
		end++;
	}
	end--;  /* Устанавливаем указатель на последний символ */

	/* Меняем символы местами, пока не дойдем до середины строки */
	while (start < end)
	{
		/* Меняем символы местами */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Двигаем указатели */
		start++;
		end--;
	}
}
