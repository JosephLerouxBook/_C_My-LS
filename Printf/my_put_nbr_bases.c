/*
** EPITECH PROJECT, 2017
** printf
** File description:
** NumberDisplay
*/
#include "my.h"

void my_put_nbr_binary(int nbr)
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
		res = nbr % 2;
		nbr = nbr / 2;
		str[j] = itc(res);
		j++;
	}
	if (i == 1)
		str[j] = '-';
	str[j + 1] = '\0';
	my_putstr(my_revstr(str));
}

void my_put_nbr_hexa_X(int nbr)
{
	int res = 0;
	char *str = malloc(sizeof(char) * 10000);
	int i = 0;
	int j = 0;
	char tab[16] = {'0', '1', '2', '3', '4', '5', '6',
			'7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	if (nbr < 0) {
		nbr = nbr * -1;
		i = 1;
	}
	while (nbr != 0) {
		res = nbr % 16;
		nbr = nbr / 16;
		str[j] = tab[res];
		j++;
	}
	if (i == 1)
		str[j] = '-';
	str[j + 1] = '\0';
	my_putstr(my_revstr(str));

}

void my_put_nbr_hexa_x(int nbr)
{
	int res = 0;
	char *str = malloc(sizeof(char) * 10000);
	int i = 0;
	int j = 0;
	char tab[16] = {'0', '1', '2', '3', '4', '5', '6',
			'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	if (nbr < 0) {
		nbr = nbr * -1;
		i = 1;
	}
	while (nbr != 0) {
		res = nbr % 16;
		nbr = nbr / 16;
		str[j] = tab[res];
		j++;
	}
	if (i == 1)
		str[j] = '-';
	str[j + 1] = '\0';
	my_putstr(my_revstr(str));
}
