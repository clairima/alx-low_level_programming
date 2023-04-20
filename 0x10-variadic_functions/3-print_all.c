#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;

		case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		break;

		case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;

		case 's':
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		break;

		default:

		break;
	}

	if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
	{
		if (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's')
		{
		printf(", ");
		}
	}

	i++;
	}

	va_end(args);

	printf("\n");
}
