NAME	= libft.a
CC		= cc $(CFLAGS)
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
TESTS	= ./tests/test_ft_atoi.c ./tests/test_ft_bzero.c
OBJS	= $(SRCS:.c=.o)
INCS	= libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

atoi: ft_atoi.c ./tests/test_ft_atoi.c
	$(CC) $^

bzero: ft_bzero.c ./tests/test_ft_bzero.c
	$(CC) $^

calloc: ft_calloc.c ft_bzero.c ./tests/test_ft_calloc.c
	$(CC) $^

isalnum: ft_isalnum.c ./tests/test_ft_isalnum.c
	$(CC) $^

isalpha: ft_isalpha.c ./tests/test_ft_isalpha.c
	$(CC) $^

isascii: ft_isascii.c ./tests/test_ft_isascii.c
	$(CC) $^

isdigit: ft_isdigit.c ./tests/test_ft_isdigit.c
	$(CC) $^

.PHONY: all clean fclean re
