#include <stdio.h> //printf
#include <dirent.h> //readdir opendir
#include <sys/types.h> // opendir stat
#include <unistd.h> // stat
#include <sys/stat.h> // stat
#include <grp.h> //struct "group"
#include <pwd.h> // struct "password"
#include <time.h> //time
#include <unistd.h> //write
#include <stdlib.h> // malloc
#include "Printf/my.h"

//EXIT
#define EXIT_ERROR 84
//Colors
#define GREEN "\033[0332m"
#define RED "\033[0331m"
#define BLUE "\033[034m"
#define WHITE "\033[039m"

typedef struct stru {
	DIR *dirp;
	DIR *dirp2;
	struct dirent *entry;
	struct stat stats;
	struct passwd *psw;
	struct group *grp;
} stru;

//init_main_arg.c
char *get_path(char *av);
int get_flags(char **av);
int jump_flag(char **av);
int flag_function(char c, int flag_value);
//main.c
int interpret_flag(int flag_value, char *path);
//cast.c
int cti(char k);
char itc(int nbr);
char *itcstar(int nbr);
//count.c
int my_strlen(char const *str);
int my_intlen(int nbr);
//str_func.c
char *my_revstr(char *str);
char *my_strcat(char *dest, char *src);
//display.h
int my_put_nbr(int nb);
void my_putstr(char *str);
void my_putchar(char c);
void my_put_time(struct stat stats);
//ls.c
void my_ls(char *path);
//ls-l.c
int my_ls_l(char  *path);
void my_type(struct dirent *entry);
void my_getrights(struct stat sb);
int check_my_type(char *path);
//strcpy.c
char *my_strdup(char *src);
char *my_strcpy(char *dest, char const *src);
