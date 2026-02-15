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

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror


#########################################################################
## SOURCES

SRC	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c
		
OBJ	=	${SRC:.c=.o}


#########################################################################
## RULES

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f *.o
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re
