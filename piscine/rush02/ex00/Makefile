NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
	@cc -Wall -Wextra -Werror rush-02.c ft_atoi.c find_number.c ft_readfile.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean: clean
	@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete