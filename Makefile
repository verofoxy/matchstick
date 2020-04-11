##
## EPITECH PROJECT, 2019
## makefile
## File description:
## final makefile
##

SRC	=	src/match.c \
		src/put_map.c \
		src/main_game.c \
		src/count.c \
		src/main.c \
		src/ia.c \
		src/remove_player.c

CPPFLAGS =	-I ./include -Wall -Wextra

CFLAGS	=	-g3

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -g3 -o $(NAME) $(OBJ) -L./lib/my/ -lmy

all:	$(NAME)

clean:	clean
	make fclean -C lib/my/
	rm -f $(NAME)
	rm -f libmy.a

fclean:	clean
	rm -f $(OBJ)

re: fclean clean all

.PHONY: all clean fclean
