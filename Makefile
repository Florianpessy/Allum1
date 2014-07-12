##
## Makefile for  in /home/pessy_f/rendu/Allum1
##
## Made by Pessy Florian
## Login   <pessy_f@epitech.net>
##
## Started on  Thu Jul 10 20:11:33 2014 Pessy Florian
## Last update Thu Jul 10 20:11:37 2014 Pessy Florian
##

CC	= gcc

NAME	= allum1

RM	= rm -f

SRC	= allum1.c \
	  lib.c \
	  lib2.c \
	  lib3.c \
	  lib4.c \
	  wordtab.c \
	  ia.c \
	  my_getnbr.c \

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
