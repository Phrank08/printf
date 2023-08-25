#include "main.h"

/**
 * _printf - Prints formatted output according to a specified format.
 * @format: The format string specifying how to print the arguments.
 * Project done by Eneh Franklyn Okechukwu Okechukwu and Vuyo Xaba
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int tally = 0;
	va_list parameters;

	if (format == NULL)
		return (-1);

	va_start(parameters, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			tally++;
		}

		format++;
	}

	va_end(parameters);

	return (tally);
}

