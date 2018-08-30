CC	=	gcc

RM	=	rm -f

AR	=	ar rc

LIBS	=	-L./lib/ -lmy

NAME	=	libmy.a

SRCS	=	count.c		\
		cast.c		\
		displayfunc.c	\
		flag-lpu.c	\
		flag-S%.c	\
		litle_func.c	\
		my_put_nbr_bases.c \
		honte.c		\
		my_printf.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) -c $(SRCS)
		$(AR) $(NAME) $(OBJS)
		$(RM) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
