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

atoi: ft_atoi.c ./tests/test_ft_atoi.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

bzero: ft_bzero.c ./tests/test_ft_bzero.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

calloc: ft_calloc.c ft_bzero.c ./tests/test_ft_calloc.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

isalnum: ft_isalnum.c ./tests/test_ft_isalnum.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

isalpha: ft_isalpha.c ./tests/test_ft_isalpha.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

isascii: ft_isascii.c ./tests/test_ft_isascii.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

isdigit: ft_isdigit.c ./tests/test_ft_isdigit.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

isprint: ft_isprint.c ./tests/test_ft_isprint.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

itoa: ft_itoa.c ./tests/test_ft_itoa.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

memchr: ft_memchr.c ./tests/test_ft_memchr.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

memcmp: ft_memcmp.c ./tests/test_ft_memcmp.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

memcpy: ft_memcpy.c ./tests/test_ft_memcpy.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

memmove: ft_memmove.c ./tests/test_ft_memmove.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

memset: ft_memset.c ./tests/test_ft_memset.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

putchar: ft_putchar_fd.c ./tests/test_ft_putchar_fd.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

putendl: ft_putendl_fd.c ./tests/test_ft_putendl_fd.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

putnbr: ft_putnbr_fd.c ./tests/test_ft_putnbr_fd.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

putstr: ft_putstr_fd.c ./tests/test_ft_putstr_fd.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

split: ft_split.c ./tests/test_ft_split.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strchr: ft_strchr.c ./tests/test_ft_strchr.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strdup: ft_strdup.c ft_memcpy.c ./tests/test_ft_strdup.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

striteri: ft_striteri.c ft_strdup.c ft_memcpy.c ./tests/test_ft_striteri.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strjoin: ft_strjoin.c ft_strlen.c ./tests/test_ft_strjoin.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strlcat: ft_strlcat.c ft_strlen.c ./tests/test_ft_strlcat.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strlcpy: ft_strlcpy.c ft_strlen.c ./tests/test_ft_strlcpy.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strlen: ft_strlen.c ./tests/test_ft_strlen.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strmapi: ft_strmapi.c ft_strlen.c ./tests/test_ft_strmapi.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strncmp: ft_strncmp.c ./tests/test_ft_strncmp.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strnstr: ft_strnstr.c ./tests/test_ft_strnstr.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strrchr: ft_strrchr.c ft_strlen.c ./tests/test_ft_strrchr.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

strtrim: ft_strtrim.c ft_strlcpy.c ft_strlen.c ./tests/test_ft_strtrim.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

substr: ft_substr.c ft_strlen.c ./tests/test_ft_substr.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

tolower: ft_tolower.c ./tests/test_ft_tolower.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

toupper: ft_toupper.c ./tests/test_ft_toupper.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstnew: ft_lstnew_bonus.c ./tests/test_ft_lstnew_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstadd_front: ft_lstadd_front_bonus.c  ft_lstnew_bonus.c ./tests/test_ft_lstadd_front_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstsize: ft_lstsize_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstsize_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstlast: ft_lstlast_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstlast_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstadd_back: ft_lstadd_back_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstadd_back_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstdelone: ft_lstdelone_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstdelone_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstclear: ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstclear_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstiter: ft_lstiter_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstiter_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test

lstmap: ft_lstmap_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ./tests/test_ft_lstmap_bonus.c
	$(CC) $^ $(CFLAGS) $(DEBUG) -o test
	./test
