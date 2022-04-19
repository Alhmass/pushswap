#
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Library making file.
#

SRC	=	sources/main.c \
		sources/pushswap.c \
		sources/my_strlen.c \
		sources/my_getnbr.c \
		sources/sorte_chain.c \
		sources/my_putstr.c \
		sources/my_put_nbr.c \
		sources/verif_order.c


OBJ = 	$(SRC:.c=.o)

NAME = push_swap

LDFLAGS = -L./sources/my_printf/

LDLIBS = -lmy

CPPFLAGS = -I./includes

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

cc: re clean

.PHONY: all clean fclean re cc lib
