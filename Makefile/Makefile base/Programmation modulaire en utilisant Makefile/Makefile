all: ft_putnbr.x

ft_putnbr.x: main.o ft_putnbr.o
	gcc -Wall -Wextra -Werror main.o ft_putnbr.o -o ft_putnbr.x

main.o: main.c
	gcc -Wall -Wextra -Werror -c main.c -o main.o
ft_putnbr.o: ft_putnbr.c
	gcc -Wall -Wextra -Werror -c ft_putnbr.c -o ft_putnbr.o
