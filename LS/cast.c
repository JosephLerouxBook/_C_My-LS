/*
** EPITECH PROJECT, 2017
** LS
** File description:
** Casting functions
*/
#include "my.h"

int cti(char k)
{
	return(k-48);
}

char itc(int nbr)
{
	return(nbr+48);
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
