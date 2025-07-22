NAME = pipex

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -Itest

RM = rm -rf

LIBFTNAME = libft
LIBFT = $(LIBFTNAME)/libft.a

SRCS =	test/wait_test.c	\
		test/wait_test2.c 	\
		test/WNOHANG.c	\
		test1/test_acces.c	\
		test1/test_execve.c	\
		test1/test_perror.c	\
		test1/test_strerror.c	\
		ft_pipex.c	\
		ft_pipex_utils.c	\
		ft_pipex_error.c	\
		ft_proccess.c	\
		test1/test_dup2.c	\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(LIBFT):
	make -C $(LIBFTNAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean : 
	$(RM) $(OBJS)
	make clean -C $(LIBFTNAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFTNAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

re : fclean all

.PHONY: all clean fclean re