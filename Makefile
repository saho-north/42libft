NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
INCLUDE = -I$(HDR_DIR)

HDR_LIST  = ft_ctype.h ft_lst_bonus.h  ft_stdlib.h ft_strings.h libft.h ft_exdlib.h ft_stdio.h ft_string.h get_next_line.h ft_strtol.h
HDR_DIR = ./includes/
HDR  = $(addprefix $(HDR_DIR), $(HDR_LIST))

#./ctype:
CTYPE_SRCS = ft_digittoint.c ft_isalpha.c ft_isdigit.c ft_isspace.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isxdigit.c ft_toupper.c
CTYPE_DIR  = ./srcs/ctype/
CTYPE_OBJS = $(addprefix $(CTYPE_DIR), $(CTYPE_SRCS:.c=.o))

#./exdlib:
EXDLIB_SRCS = ft_interpolate.c ft_itoa.c ft_lerpcolor.c ft_free_2d_array.c
EXDLIB_DIR  = ./srcs/exdlib/
EXDLIB_OBJS = $(addprefix $(EXDLIB_DIR), $(EXDLIB_SRCS:.c=.o))

#./lst:
LST_SRCS = ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c
LST_DIR  = ./srcs/lst/
LST_OBJS = $(addprefix $(LST_DIR), $(LST_SRCS:.c=.o))

#./stdio:
STDIO_SRCS = ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c  ft_putstr_fd.c  get_next_line.c
STDIO_DIR  = ./srcs/stdio/
STDIO_OBJS = $(addprefix $(STDIO_DIR), $(STDIO_SRCS:.c=.o))

#./stdlib:
STDLIB_SRCS = ft_atoi.c ft_atoi_endptr.c ft_calloc.c ft_realloc.c ft_strtol.c ft_strtol_utils.c
STDLIB_DIR  = ./srcs/stdlib/
STDLIB_OBJS = $(addprefix $(STDLIB_DIR), $(STDLIB_SRCS:.c=.o))

#./string:
STRING_SRCS = ft_memchr.c ft_memmove.c ft_strchr.c ft_strjoin.c  ft_strlen.c ft_strnstr.c  ft_substr.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_memcpy.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c
STRING_DIR  = ./srcs/string/
STRING_OBJS = $(addprefix $(STRING_DIR), $(STRING_SRCS:.c=.o))

#./strings:
STRINGS_SRCS = ft_bzero.c ft_strcasecmp.c
STRINGS_DIR  = ./srcs/strings/
STRINGS_OBJS = $(addprefix $(STRINGS_DIR), $(STRINGS_SRCS:.c=.o))

OBJS 		= $(CTYPE_OBJS) $(EXDLIB_OBJS) $(STDIO_OBJS) $(STDLIB_OBJS) $(STRING_OBJS) $(STRINGS_OBJS)
BONUS_OBJS	= $(LST_OBJS)

ALL_OBJS 	= $(OBJS)
ifdef ADD
ALL_OBJS	+= $(BONUS_OBJS)
endif

$(NAME): $(ALL_OBJS)
	$(AR) $(ARFLAGS) $@ $^

all: $(NAME)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(ALL_OBJS)
	make ADD=1 all

.PHONY: all clean fclean re bonus
