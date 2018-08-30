CC      =       gcc

RM      =       rm -f

NAME    =       my_ls

SRCS    =       cast.c \
                count.c \
                display.c \
                ls-l.c \
                strcpy.c \
		strcat.c \
		main.c \
		ls.c \
		get_args.c \
		Printf/my_printf.c \
		Printf/honte.c \
		Printf/my_put_nbr_bases.c \
		Printf/displayfunc.c \
		Printf/flag-S%.c \
		Printf/flag-lpu.c

OBJS    =	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:     fclean all



