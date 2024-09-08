NAME = libft.a

SOURCES = ft_putstr_fd.c

OBJECTS = $(SOURCES:.c=.o)

cc = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?


%.o: %.cc
	$(cc) -c $(CFLAGS) $?
	
clean:
		$rm -f $(OBJECTS)

fclean:
	$rm - f $(NAME)

re: fclean all


.PHONY: all bonus clean fclean re
