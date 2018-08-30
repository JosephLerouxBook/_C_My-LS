/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** revstr
*/
#include "my.h"

char *my_revstr(char *str)
{
	char *tmp = malloc(sizeof(char) * (my_strlen(str) + 1));
	int i = my_strlen(str) - 1;
	int j = 0;

	while (i >= 0) {
		tmp[j] = str[i];
		i--;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
