##
## EPITECH PROJECT, 2019
## Day_10
## File description:
## makefile
##
.PHONY : clean fclean re

SRC	=	main.c \
		pp.c \
		rr.c \
		rrr.c \
		ss.c \
		display.c \
		big_finder.c
#		fusion.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)
