NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRCS = ft_display_file.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAG) $(SRCS) -o $(NAME)

%.o : %.c
	gcc $(FLAG) -c $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all