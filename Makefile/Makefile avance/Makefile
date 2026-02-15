################	Règle générique pour les .o :	####################
#
#   %.o: %.c
#	gcc -Wall -Wextra -Werror -c $< -o $@
#
#	% : caractère générique	(tout_meme_nom.o et tout_meme_nom.c)
#	$< : première dépendance (le fichier .c)
#	$@ : nom de la cible (le fichier .o)
#
#########################################################################

#########################################################################
## ARGUMENTS

NAME	=	ft_putnbr.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror


#########################################################################
## SOURCES

SRC	=	main.c \
	ft_putnbr.c
OBJ	=	${SRC:.c=.o}


#########################################################################
## RULES

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f *.o
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re
