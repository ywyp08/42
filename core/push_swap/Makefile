NAME	= push_swap
CHECK	= checker

SRC	= $(wildcard src/*.c utils/*.c instructions/*.c)
CH_SRC	= $(wildcard utils/*.c instructions/*.c) src/simple.c src/radix.c check.c

OBJ	= ${SRC:.c=.o}
CH_OBJ	= ${CH_SRC:.c=.o}

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -Iincludes

RM	= rm -rf

all: ${NAME} ${CHECK}

${NAME}: ${OBJ}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJ} ./libft/libft.a -o ${NAME}

${CHECK}: ${CH_OBJ}
	@${CC} ${CFLAGS} ${CH_OBJ} ./libft/libft.a -o ${CHECK}

clean:
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJ}
	@${RM} ${CH_OBJ}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}
	
re: fclean all

.PHONY: all clean fclean re
