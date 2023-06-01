CC		= cc
CFLAGS	= -Wall -Wextra -Werror -I.
DEBUG	= -fsanitize=address -g
AR		= ar
ARFLAGS = rc
NAME	= libft.a
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
ft_toupper.c
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
	$(AR) $(ARFLAGS) $@ $^

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

atoi: ./tests/test_ft_atoi.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

bzero: ./tests/test_ft_bzero.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

calloc: ./tests/test_ft_calloc.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

isalnum: ./tests/test_ft_isalnum.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

isalpha: ./tests/test_ft_isalpha.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

isascii: ./tests/test_ft_isascii.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

isdigit: ./tests/test_ft_isdigit.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

isprint: ./tests/test_ft_isprint.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

itoa: ./tests/test_ft_itoa.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

memchr: ./tests/test_ft_memchr.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

memcmp: ./tests/test_ft_memcmp.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

memcpy: ./tests/test_ft_memcpy.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

memmove: ./tests/test_ft_memmove.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

memset: ./tests/test_ft_memset.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

putchar: ./tests/test_ft_putchar_fd.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

putendl: ./tests/test_ft_putendl_fd.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

putnbr: ./tests/test_ft_putnbr_fd.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

putstr: ./tests/test_ft_putstr_fd.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

split: ./tests/test_ft_split.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strchr: ./tests/test_ft_strchr.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strdup: ./tests/test_ft_strdup.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

striteri: ./tests/test_ft_striteri.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strjoin: ./tests/test_ft_strjoin.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strlcat: ./tests/test_ft_strlcat.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strlcpy: ./tests/test_ft_strlcpy.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strlen: ./tests/test_ft_strlen.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strmapi: ./tests/test_ft_strmapi.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strncmp: ./tests/test_ft_strncmp.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strnstr: ./tests/test_ft_strnstr.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strrchr: ./tests/test_ft_strrchr.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

strtrim: ./tests/test_ft_strtrim.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

substr: ./tests/test_ft_substr.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

tolower: ./tests/test_ft_tolower.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

toupper: ./tests/test_ft_toupper.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstnew: ./tests/test_ft_lstnew_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstadd_front: ./tests/test_ft_lstadd_front_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstsize: ./tests/test_ft_lstsize_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstlast: ./tests/test_ft_lstlast_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstadd_back: ./tests/test_ft_lstadd_back_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstdelone: ./tests/test_ft_lstdelone_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstclear: ./tests/test_ft_lstclear_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstiter: ./tests/test_ft_lstiter_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test

lstmap: ft_lstnew_bonus.c ./tests/test_ft_lstmap_bonus.c
	$(CC) $< $(SRCS) $(CFLAGS) $(DEBUG) -o test
	./test
