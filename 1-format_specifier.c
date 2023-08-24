#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - entry point of the program.
 * description - Handling the following format specifier 'd' and 'i'
 * Author - Eneh Franklyn Okechukwu
 * Return: Numbers of characters printed.
 */

int format_specifier(const char *format, ...)
{
	int chars_printed = 0;
	int i = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i +1])
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				chars_printed += printf("%d", va_arg(args, int));
			else
			{
				putchar('%');
				chars_printed++;
			}
			i++;
		}
		else
		{
			putchar(format[i]);
			chars_printed++;
		}
	}

	va_end(args);
	return chars_printed;
}

	int main(void)
{
		printf("Number %d and %i are integers", 42, 65);

	return (0);
}
