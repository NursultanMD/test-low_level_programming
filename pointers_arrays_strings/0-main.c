#include "main.h"
#include <stdio.h>

/**
 * main - проверяет работу функции reset_to_98
 *
 * Return: всегда 0
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

