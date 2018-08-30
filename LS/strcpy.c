/*
** EPITECH PROJECT, 2017
** LS
** File description:
** function needed to make a copy of a string
*/
#include "my.h"

char *my_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * my_strlen(src));
	if (dest == NULL)
		return (NULL);
	my_strcpy(dest, src);
	return (dest);
}

char    *my_strcpy(char *dest, char const *src)
{
	int     i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
