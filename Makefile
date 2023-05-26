CC		= cc
CFLAGS	= -Wall -Wextra -Werror -I.
DEBUG	= -Wall -Wextra -Werror -I. -fsanitize=address -g
NAME	= libft.a
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS 	= $(SRCS:.c=.o)
INCS	= libft.h
BONUS_SRCS	= ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c


BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

ALL_OBJS 	= $(OBJS)
ifdef ADD
ALL_OBJS	+= $(BONUS_OBJS)
endif

$(NAME): $(ALL_OBJS)
	ar rc $(NAME) $(ALL_OBJS)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
	make ADD=1

.PHONY: all clean fclean re bonus

atoi: ft_atoi.c ./tests/test_ft_atoi.c
	$(CC) $^ $(DEBUG)

bzero: ft_bzero.c ./tests/test_ft_bzero.c
	$(CC) $^ $(DEBUG)

calloc: ft_calloc.c ft_bzero.c ./tests/test_ft_calloc.c
	$(CC) $^ $(DEBUG)

isalnum: ft_isalnum.c ./tests/test_ft_isalnum.c
	$(CC) $^ $(DEBUG)

isalpha: ft_isalpha.c ./tests/test_ft_isalpha.c
	$(CC) $^ $(DEBUG)

isascii: ft_isascii.c ./tests/test_ft_isascii.c
	$(CC) $^ $(DEBUG)

isdigit: ft_isdigit.c ./tests/test_ft_isdigit.c
	$(CC) $^ $(DEBUG)

isprint: ft_isprint.c ./tests/test_ft_isprint.c
	$(CC) $^ $(DEBUG)

itoa: ft_itoa.c ./tests/test_ft_itoa.c
	$(CC) $^ $(DEBUG)

memchr: ft_memchr.c ./tests/test_ft_memchr.c
	$(CC) $^ $(DEBUG)

memcmp: ft_memcmp.c ./tests/test_ft_memcmp.c
	$(CC) $^ $(DEBUG)

memcpy: ft_memcpy.c ./tests/test_ft_memcpy.c
	$(CC) $^ $(DEBUG)

memmove: ft_memmove.c ./tests/test_ft_memmove.c
	$(CC) $^ $(DEBUG)

memset: ft_memset.c ./tests/test_ft_memset.c
	$(CC) $^ $(DEBUG)

putchar: ft_putchar_fd.c ./tests/test_ft_putchar_fd.c
	$(CC) $^ $(DEBUG)

putendl: ft_putendl_fd.c ./tests/test_ft_putendl_fd.c
	$(CC) $^ $(DEBUG)

putnbr: ft_putnbr_fd.c ./tests/test_ft_putnbr_fd.c
	$(CC) $^ $(DEBUG)

putstr: ft_putstr_fd.c ./tests/test_ft_putstr_fd.c
	$(CC) $^ $(DEBUG)

split: ft_split.c ./tests/test_ft_split.c
	$(CC) $^ $(DEBUG)

strchr: ft_strchr.c ./tests/test_ft_strchr.c
	$(CC) $^ $(DEBUG)

strdup: ft_strdup.c ft_memcpy.c ./tests/test_ft_strdup.c
	$(CC) $^ $(DEBUG)

striteri: ft_striteri.c ft_strdup.c ft_memcpy.c ./tests/test_ft_striteri.c
	$(CC) $^ $(DEBUG)

strjoin: ft_strjoin.c ft_strlen.c ./tests/test_ft_strjoin.c
	$(CC) $^ $(DEBUG)

strlcat: ft_strlcat.c ft_strlen.c ./tests/test_ft_strlcat.c
	$(CC) $^ $(DEBUG)

strlcpy: ft_strlcpy.c ft_strlen.c ./tests/test_ft_strlcpy.c
	$(CC) $^ $(DEBUG)

strlen: ft_strlen.c ./tests/test_ft_strlen.c
	$(CC) $^ $(DEBUG)

strmapi: ft_strmapi.c ft_strlen.c ./tests/test_ft_strmapi.c
	$(CC) $^ $(DEBUG)

strncmp: ft_strncmp.c ./tests/test_ft_strncmp.c
	$(CC) $^ $(DEBUG)

strnstr: ft_strnstr.c ./tests/test_ft_strnstr.c
	$(CC) $^ $(DEBUG)

strrchr: ft_strrchr.c ft_strlen.c ./tests/test_ft_strrchr.c
	$(CC) $^ $(DEBUG)

strtrim: ft_strtrim.c ft_strlcpy.c ft_strlen.c ./tests/test_ft_strtrim.c
	$(CC) $^ $(DEBUG)

substr: ft_substr.c ft_strlen.c ./tests/test_ft_substr.c
	$(CC) $^ $(DEBUG)

tolower: ft_tolower.c ./tests/test_ft_tolower.c
	$(CC) $^ $(DEBUG)

toupper: ft_toupper.c ./tests/test_ft_toupper.c
	$(CC) $^ $(DEBUG)

