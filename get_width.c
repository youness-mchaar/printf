#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *tab, int *j, va_list list)
{
	int hello;
	int width = 0;

	for (hello = *i + 1; tab[hello] != '\0'; hello++)
	{
		if (is_digit(tab[hello]))
		{
			width *= 10;
			width += tab[hello] - '0';
		}
		else if (format[hello] == '*')
		{
			hello++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*j = hello - 1;

	return (width);
}
