/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** too many case... too many switch
*/
#include "my.h"

void getswitched(char let, va_list args)
{
	switch (let) {
	case 's' :
		my_putstr(va_arg(args, char*));
		break;
	case 'c' :
		my_putchar(va_arg(args, int));
		break;
	case 'i' :
		my_put_nbr_deci(va_arg(args, int));
		break;
	}
	switch (let) {
	case '%' :
		flagpercent();
		break;
	case 'd' :
		my_put_nbr_deci(va_arg(args, int));
		break;
	case 'S' :
		flagS(va_arg(args, char*));
		break;
	}
}

void getswitched_format(char let, va_list args)
{
	switch (let) {
	case 'o' :
		my_putchar('0');
		my_put_nbr_octal(va_arg(args, int));
		break;
	case 'x' :
		my_putstr("0x");
		my_put_nbr_hexa_x(va_arg(args, int));
		break;
	case 'X' :
		my_putstr("0X");
		my_put_nbr_hexa_X(va_arg(args, int));
		break;
	}
}

void getswitched2(char let, va_list args)
{
	switch (let) {
	case 'x' :
		my_put_nbr_hexa_x(va_arg(args, int));
		break;
	case 'X' :
		my_put_nbr_hexa_X(va_arg(args, int));
		break;
	case 'u' :
		flagu(va_arg(args, unsigned int));
	}
	switch (let) {
	case 'o' :
		my_put_nbr_octal(va_arg(args, int));
		break;
	case 'b' :
		my_put_nbr_binary(va_arg(args, int));
		break;
	case 'p' :
		flagp(va_arg(args, int));
		break;
	}
}
