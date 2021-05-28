NAME = push_swap.a

SRC = *.c

OBJECT = $(SRC:.c=.o)

FLAG = gcc -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	@$(FLAG) $(SRC)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
