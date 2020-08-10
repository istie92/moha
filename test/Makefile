##
## ETNA PROJECT, 10/08/2020 by zenidi_m
## [...]
## File description:
##      [...]
##

CC  =   gcc

NAME    =   main

SRC =   ./main.c    \
        ./binary_tree.c \
        ./print_to.c

RM      =       rm -f

OBJ     =       $(SRC:%.c=%.o)

CPPFLAGS    +=  -I./include

CFLAGS  +=  -W  -Werror -Wextra -std=c11

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
