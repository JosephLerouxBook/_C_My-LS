/*
** EPITECH PROJECT, 2017
** LS
** File description:
** Counting size of variable functions
*/
#include "my.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int my_intlen(int nbr)
{
	int count = 0;

	while (nbr > 9) {
		nbr = nbr / 10;
		count++;
	}
	count++;
	return(count);
}
