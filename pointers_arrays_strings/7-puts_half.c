#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
    int len = 0;
    int start;

    /* Находим длину строки */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Если длина строки нечётная, начинаем с (len + 1) / 2 */
    if (len % 2 == 0)
    {
        start = len / 2;
    }
    else
    {
        start = (len + 1) / 2;
    }

    /* Печатаем вторую половину строки */
    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}
