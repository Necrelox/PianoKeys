CC = gcc
EXEC = pianokey
SRC =	src/main.c	\
		src/piano/get_keys.c	\
		lib/my_getnbr.c	\
		lib/my_put_nbr.c	\
		lib/my_putstr.c	\
		lib/my_revstr.c	\
		lib/my_strcmp.c	\
		lib/my_strdup.c	\
		lib/my_strlen.c	\
		lib/nb_to_str.c	\
		lib/my_putchar.c	\
		lib/str_to_word_array.c	\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include -lwinmm
all : $(EXEC)


$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) 