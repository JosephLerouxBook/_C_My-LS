/*
** EPITECH PROJECT, 2017
** Printf
** File description:
** le .h
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//my_printf.c
void checkstr(char *str, va_list args);
void my_printf(char *str, ...);
//cast.c
char itc(int nbr);
int cti(char c);
char *itcstar(int nbr);
//count.c
int my_intlen(int nbr);
int my_strlen(char const *str);
//displayfunc.c
void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr_deci(int nb);
//flag-lpu.c
void flagl(long nb);
void flagp(int nb);
void flagu(unsigned int nb);
//flag-S%.c
void flagpercent();
void flagS(char *str);
void my_put_nbr_octal(int nbr);
//honte.c
void getswitched(char let, va_list args);
void getswitched2(char let, va_list args);
void getswitched_format(char let, va_list args);
//litle_func.c
char *my_revstr(char *str);
//my_put_nbr_bases.c
void my_put_nbr_binary(int nbr);
void my_put_nbr_hexa_x(int nbr);
void my_put_nbr_hexa_X(int nbr);
	
