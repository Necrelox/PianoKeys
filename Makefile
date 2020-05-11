NAME	=	oui

SRC	=	src/main.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) lib/libmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
