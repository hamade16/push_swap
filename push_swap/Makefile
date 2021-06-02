NAME = push_swap

SRC = push_swap.c ft_atoi.c operations.c operations2.c opeeration_r.c

OBJECT = push_swap.o ft_atoi.o operations.o operations2.o opeeration_r.o

FLAG = @gcc -Wall -Wextra -Werror -fsanitize=address


all: $(NAME)

$(NAME):
	@$(FLAG) $(SRC) -o $(NAME)


clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
