 CC      =       gcc

RM      =       rm -f

NAME    =       my_ls

SRCS    =       main.c 

OBJS    =	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) -lc_graph_prog
		$(RM) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
