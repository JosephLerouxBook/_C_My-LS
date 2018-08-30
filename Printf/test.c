/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** Main de test
*/
#include "my.h"

int main(int ac, char **av)
{
	char *str = "SE";
	char *str2 = "VRAN";
	int nbr = 210;
	int i = 0;

	printf("format : %#X", nbr);
	//printf("printf system : %p\n" );
	my_printf("mon printf : %#X\n", nbr);
	//my_printf("%s%s%i", str,str2, nbr);
//my_printf("%s%d", str, nbr);
}
