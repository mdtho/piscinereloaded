NAME = libft.a

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I /includes/

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

all:
	gcc -c $(FLAGS) $(INCLUDES) $(SRCS)
	ar rc $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make
