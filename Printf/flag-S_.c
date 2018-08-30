/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** Function for flag % & S & o
*/
#include "my.h"

void my_put_nbr_octal(int nbr)
{
	int res = 0;
	char *str = malloc(sizeof(char) * 10000);
	int i = 0;
	int j = 0;

	if (nbr < 0) {
		nbr = nbr * -1;
		i = 1;
	}
	while (nbr != 0) {
		res = nbr % 8;
		nbr = nbr / 8;
		str[j] = itc(res);
		j++;
	}
	if (i == 1)
		str[j] = '-';
	str[j + 1] = '\0';
	my_putstr(my_revstr(str));
}

void flagpercent()
{
	my_putchar('%');
}

void flagS(char *str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] < 32 || str[i] >= 127) {
			my_putstr("\\0");
			if (str[i] <= 7)
				my_putchar('0');
			my_put_nbr_octal(str[i]);
			i++;
		}
		my_putchar(str[i]);
	}
}
