#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be printed.
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	/* Проходим по всей строке */
	while (str[i] != '\0')  
	{
		if (i % 2 == 0)  /* Выводим символы на четных индексах */
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');  /* Печатаем новую строку после завершения */
}
