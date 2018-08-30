/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** Function for flag l & p & u
*/
#include "my.h"

void flagl(long nb)
{

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb < 10)
		my_putchar(48 + nb);
	if (nb > 9) {
		flagl(nb / 10);
		flagl(nb % 10);
	}
}

void flagp(int nb)
{
	my_putstr("0x");
	my_put_nbr_hexa_x(nb);
}

void flagu(unsigned int nb)
{
	if (nb >= 0 && nb < 10)
		my_putchar(48 + nb);
	if (nb > 9) {
		flagu(nb / 10);
		flagu(nb % 10);
	}
}
