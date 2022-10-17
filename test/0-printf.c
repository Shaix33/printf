#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * description: custom printf function
 *
 * @format: pointer
 *
 * Return: length of the string
 */

int _printf(const char *format, ...)
{
	const char *y, *str;
	int pct, c;

	va_list arg;

	va_start(arg, format);

	for (y = format; *y; y++)
	{
		if (*y != '%')
			putchar (*y);
		continue;
	}

	switch (*(y + 1))
	{
		case 'c':
			c = va_arg(arg, int);
			_putchar(c);
			break;

		case 's':
			for (str = va_arg(arg, char *); *str; str++)
				_putchar(*str);
			break;

		case '%':
			pct = va_arg(arg, "%37");
			_putchar(pct);
			break;
	}
	va_end(arg);

	return (0);
}
