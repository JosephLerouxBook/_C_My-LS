/*
** EPITECH PROJECT, 2017
** LS
** File description:
** the software core
*/
#include "my.h"

int interpret_flag(int flag_value, char *path)
{
	int (*tab[])(char *) = {my_ls_l};
	int possible_flag[] = {1000, 100, 10, 1, 1100,
			       1001, 1010, 101, 110, 11, '\0'};

	if (flag_value == 0)
		my_ls(path);
	for (int i = 0; possible_flag[i]; i++) {
		if (possible_flag[i] == flag_value)
			tab[i](path);
	}
	return(0);
}

int main(int ac, char **av)
{
	int flag_nbr = get_flags(av);
	int i = jump_flag(av);
	char *path = av[i];

	if (ac < 2)
		my_ls(".");
	else
		if (av[i] == NULL) {
			interpret_flag(flag_nbr, ".");
			i++;
		}
	while (av[i] != NULL) {
		interpret_flag(flag_nbr, path);
		i++;
	}
}
