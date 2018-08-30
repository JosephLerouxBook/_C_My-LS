/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** Function switching variable types
*/
#include "my.h"

char itc(int nbr)
{
	return(nbr + 48);
}

int cti(char c)
{
	if (c == 0)
		return(0);
	return(c - 48);
}

char *itcstar(int nbr)
{
	char *str = malloc(sizeof(char) * 32);
	int nbrlen = my_intlen(nbr);

	str[0] = itc(nbr % 10);
	for (int loop = 1; loop < nbrlen; loop++) {
		nbr = nbr / 10;
		str[loop] = itc(nbr % 10);
	}
	return (my_revstr(str));
}
