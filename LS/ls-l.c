/*
** EPITECH PROJECT, 2017
** LS
** File description:
** functing needed for ls-l
*/
#include "my.h"

int  check_my_type(char *path)
{
	if (opendir(path) == NULL) {
		my_putstr(path);
		my_putchar('\n');
		return(0);
	}
	return(1);
}

void    my_type(struct dirent *entry)
{
	if ((entry->d_type) == DT_DIR)
		my_putchar('d');
	if ((entry->d_type) == DT_REG)
		my_putchar('-');
	if ((entry->d_type) == DT_LNK)
		my_putchar('l');
	if ((entry->d_type) == DT_BLK)
		my_putchar('b');
	if ((entry->d_type) == DT_CHR)
		my_putchar('c');
	if ((entry->d_type) == DT_SOCK)
		my_putchar('s');
	if ((entry->d_type) == DT_FIFO)
		my_putchar('p');
}

void    my_getrights(struct stat sb)
{
	char *str = malloc(sizeof(char) * 10);

	str[0] = ((sb.st_mode & S_IRUSR) ? 114 : 45);
	str[1] = ((sb.st_mode & S_IWUSR) ? 119 : 45);
	str[2] = ((sb.st_mode & S_IXUSR) ? 120 : 45);
	str[3] = ((sb.st_mode & S_IRGRP) ? 114 : 45);
	str[4] = ((sb.st_mode & S_IWGRP) ? 119 : 45);
	str[5] = ((sb.st_mode & S_IXGRP) ? 120 : 45);
	str[6] = ((sb.st_mode & S_IROTH) ? 114 : 45);
	str[7] = ((sb.st_mode & S_IWOTH) ? 119 : 45);
	str[8] = ((sb.st_mode & S_IXOTH) ? 120 : 45);
	str[9] = '\0';
	my_putstr(str);
}

int my_ls_l(char *path)
{
	stru stru;
	int v = 0;

	stru.dirp = opendir(path);
	stru.dirp2 = opendir(path);
	if (stru.dirp == NULL || stru.dirp2 == NULL)
		return (EXIT_ERROR);
	my_putstr("total ");
	while ((stru.entry = readdir(stru.dirp2)) != NULL) {
		if (stru.entry->d_name[0] != '.') {
			stat(my_strcat(path, stru.entry->d_name), &stru.stats);
			v = v + stru.stats.st_blocks;
		}
	}
	my_put_nbr(v/2);
	my_putchar('\n');
	closedir(stru.dirp2);
	while ((stru.entry = readdir(stru.dirp)) != NULL) {
		if (stru.entry->d_name[0] != '.') {
			stat(my_strcat(path, stru.entry->d_name), &stru.stats);
			stru.psw = getpwuid(stru.stats.st_uid);
			stru.grp = getgrgid(stru.stats.st_gid);
			my_type(stru.entry);
			my_getrights(stru.stats);
			my_printf(" %i %s %s %i ", stru.stats.st_nlink,
				  stru.psw->pw_name, stru.grp->gr_name,
				  stru.stats.st_size); 
			my_put_time(stru.stats);
			my_printf(" %s\n", stru.entry->d_name);
		}
	}
	closedir(stru.dirp);
}
