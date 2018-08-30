/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** Functions displaying things on screen
*/
#include "my.h"

int     my_put_nbr_deci(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb < 10)
		my_putchar(48 + nb);
	if (nb > 9) {
		my_put_nbr_deci(nb / 10);
		my_put_nbr_deci(nb % 10);
	}
	return (0);
}

