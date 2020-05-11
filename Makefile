CC = gcc
EXEC = pianokey
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

clean :
	del $(wildcard src/*.o)