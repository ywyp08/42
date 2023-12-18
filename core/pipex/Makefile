NAME	= pipex

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -rf

SRC	= src/pipex.c \
	  src/utils.c \
	  libft/libft.a

$(NAME):
	make all -C libft
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
