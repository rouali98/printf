#include "main.h"
/* BY ROUALI AND MAMAZZAL */
/**
 * _print_char - function that print char handling %c
 *
 * @list: list
 *
 * Return: 1
 */

int _print_char(va_list list)
{
	int deffer;

	deffer = va_arg(list, int);
	_putchar(deffer);

	return (1);
}
