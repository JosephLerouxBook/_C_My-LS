/*
** EPITECH PROJECT, 2017
** LS
** File description:
** Getting flag and path with functions
*/
#include "my.h"

int flag_function(char c, int flag_value)
{
	int ret = 0;
	char *flag_value_str = itcstar(flag_value);

	if (c == 'l' && flag_value_str[0] == '0')
		ret = 1000;
	else if (c == 'R' && flag_value_str[1] == '0')
		ret = 100;
	else if (c == 'r' && flag_value_str[2] == '0')
		ret = 10;
	else if (c == 't' && flag_value_str[3] == '0')
		ret = 1;
	else if (c == 'l' && flag_value_str[0] == '1')
		ret = 0;
	else if (c == 'R' && flag_value_str[1] == '1')
		ret = 0;
	else if (c == 't' && flag_value_str[2] == '1')
		ret = 0;
	else if (c == 'r' && flag_value_str[3] == '1')
		ret = 0;
	else
		ret = -10000;
	return (ret);
}

char *get_path(char *av)
{
	char *path = malloc(sizeof(char *) * my_strlen(av));

	if (av[0] == '-')
		return ("s");
	else
		path = av;
	return(path);
}

int get_flags(char **av)
{
	int flags;

	for (int i = 1; av[i]; i++) {
		if (av[i][0] == '-')
			for (int y = 1; av[i][y]; y++) {
				flags = flag_function(av[i][y], flags) + flags;
				if (flags < 0) {
					my_printf(
						"my_ls: option requires an argumment -- '%c'\ntry man ls for more information.\n",
						av[i][y]);
					return(EXIT_ERROR);
				}
			}
		return (flags);
	}
}

int jump_flag(char **av)
{
	int i = 1;

	for (int y = 0; av[y]; y++)
		if (av[y][0] == '-')
			i++;
	return (i);
}
