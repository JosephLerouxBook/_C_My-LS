/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** my_printf core
*/
#include "my.h"

void checkstr(char *str, va_list args)
{
	int i = 0;
	char *strn = malloc(sizeof(char) * my_strlen(str));

	while (str[i] != '\0') {
		if (str[i] == '%') {
			if (str[i+1] == '#') {
				getswitched_format(str[i+2], args);
				i = i + 2;
			} else {
				getswitched2(str[i+1], args);
				getswitched(str[i+1], args);
				i++;
			}
		} else
			my_putchar(str[i]);
		i++;
	}
}

void my_printf(char *str, ...)
{
	va_list argtodisplay;

	va_start(argtodisplay, str);
	checkstr(str, argtodisplay);
	va_end(argtodisplay);
}

