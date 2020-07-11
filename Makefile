CC = gcc
EXEC = pianokey
SRC =	src/main.c	\
		src/piano/minilib/my_strcat.c	\
		src/piano/minilib/my_strlen.c	\
		src/piano/minilib/my_strtab.c	\
		src/piano/minilib/my_strdup.c	\
		src/piano/log/create_log_file.c	\
		src/piano/key/get_keys.c	\
		src/piano/sound/out_sound.c	\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : $(EXEC)
$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) -lwinmm