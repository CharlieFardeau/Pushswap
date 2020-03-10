##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile clasique
##

NAME	=	push_swap

SRC		=	src/main.c\
			src/sa.c\
			src/sort_condition.c\
			src/pa_pb.c\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Werror -Wextra -Wall -I include -L./lib/my/ -lmy

all:	 $(NAME)

$(NAME):	$(OBJ)
	@make -C lib/my/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -f src/*.o

fclean:	clean
	@rm -f $(NAME)
	@make fclean -C lib/my/

re: fclean all