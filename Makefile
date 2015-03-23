#Makefile for keylogger
NAME=keylogger.cpp
SRC=src/main.cpp

OBJ=$(SRC:.c=.o)

RM=rm -f

INCLPATH=include
CFLAGS += -I$(INCLPATH) `pkg-config --cflags gtk+-2.0`

all: $(OBJ)
	cc -o $(NAME) $(OBJ) `pkg-config --cflags --libs gtk+-2.0`

clean:
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core

fclean: clean
	-$(RM) $(NAME)

re: fclean all