/*
** EPITECH PROJECT, 2017
** LS
** File description:
** function needed by ls with NO OPTION
*/
#include "my.h"

void my_ls(char *path)
{
	stru struc;
	
	struc.dirp = opendir(path);
	while ((struc.entry = readdir(struc.dirp)) != NULL) {
		stat(my_strcat(path, struc.entry->d_name), &struc.stats);
		if (struc.entry->d_name[0] != '.') {
			if (struc.entry->d_type == DT_DIR) {
				my_putstr(BLUE);
				my_putstr(struc.entry->d_name);
				my_putstr(WHITE);
			} else
				my_putstr(struc.entry->d_name);
			my_putstr("  ");
		}
	}
	my_putchar('\n');
}
