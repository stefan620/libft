NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_substr.c ft_split.c ft_strtrim.c ft_strlcat.c
					
OBJECTS = $(SOURCES:.c=.o)

BONUS =	ft_lstnew_bonus.c ft_lstaddfront_bonus.c ft_lstsize_bonus.c  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c


BONUS_OBJECTS = $(BONUS:.c=.o)

cc = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(cc) -c $(CFLAGS) $?
	
clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS) 

fclean: clean 
	rm -f $(NAME) $(BONUS_FLAG)

re: fclean $(NAME)

BONUS_FLAG = .bonus

$(BONUS_FLAG) : $(BONUS_OBJECTS)
	ar rcs $(NAME) $?
	@touch $(BONUS_FLAG)

bonus: $(NAME) $(BONUS_FLAG)

	


.PHONY: all clean fclean re bonus
