NAME	= libft.a
CC		= cc $(CFLAGS)
CFLAGS	= -Wall -Wextra -Werror
DEBUG	= -fsanitize=address -g
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
	$(CC) $^ $(DEBUG) -o atoi

bzero: ft_bzero.c ./tests/test_ft_bzero.c
	$(CC) $^ $(DEBUG) -o bzero

calloc: ft_calloc.c ft_bzero.c ./tests/test_ft_calloc.c
	$(CC) $^ $(DEBUG) -o calloc

isalnum: ft_isalnum.c ./tests/test_ft_isalnum.c
	$(CC) $^ $(DEBUG) -o isalnum

isalpha: ft_isalpha.c ./tests/test_ft_isalpha.c
	$(CC) $^ $(DEBUG) -o isalpha

isascii: ft_isascii.c ./tests/test_ft_isascii.c
	$(CC) $^ $(DEBUG) -o isascii

isdigit: ft_isdigit.c ./tests/test_ft_isdigit.c
	$(CC) $^ $(DEBUG) -o isdigit

isprint: ft_isprint.c ./tests/test_ft_isprint.c
	$(CC) $^ $(DEBUG) -o isprint

itoa: ft_itoa.c ./tests/test_ft_itoa.c
	$(CC) $^ $(DEBUG) -o itoa

memchr: ft_memchr.c ./tests/test_ft_memchr.c
	$(CC) $^ $(DEBUG) -o memchr

memcmp: ft_memcmp.c ./tests/test_ft_memcmp.c
	$(CC) $^ $(DEBUG) -o memcmp

memcpy: ft_memcpy.c ./tests/test_ft_memcpy.c
	$(CC) $^ $(DEBUG) -o memcpy

memmove: ft_memmove.c ./tests/test_ft_memmove.c
	$(CC) $^ $(DEBUG) -o memmove

memset: ft_memset.c ./tests/test_ft_memset.c
	$(CC) $^ $(DEBUG) -o memset

putchar: ft_putchar_fd.c ./tests/test_ft_putchar_fd.c
	$(CC) $^ $(DEBUG) -o putchar

putendl: ft_putendl_fd.c ./tests/test_ft_putendl_fd.c
	$(CC) $^ $(DEBUG) -o putendl

putnbr: ft_putnbr_fd.c ./tests/test_ft_putnbr_fd.c
	$(CC) $^ $(DEBUG) -o putnbr

putstr: ft_putstr_fd.c ./tests/test_ft_putstr_fd.c
	$(CC) $^ $(DEBUG) -o putstr

split: ft_split.c ./tests/test_ft_split.c
	$(CC) $^ $(DEBUG) -o split




.PHONY: all clean fclean re
