#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - entry point of the program.
 * description - Handling the following format specifier 'd' and 'i'
 * Author - Eneh Franklyn Okechukwu
 * Return: Always 0 (Success)
 */

int main(void)
{
	void format_specifier(const char *format, ...)
	{
		va_list args;
		va_start(args, format);

		for (int i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[++i] != '\0')
			{
				if (format[i] == 'd' || format[i] == 'i')
					printf("%d", va_arg(args, int));
				else
					putchar ('%'), putchar(format[i]);
			}
			else
				putchar(format[i]);
		}

		va_end(args);
	}
	
	printf("Number %d and %i are integers", 42, 123);

	return (0);
}
