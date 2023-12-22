NAME      = libft.a
CC        = cc
CFLAGS    = -Wall -Wextra -Werror
AR        = ar
ARFLAGS   = rc
INCLUDE   = -I$(HDR_DIR)

HDR_LIST  = libft.h get_next_line.h
HDR_DIR   = ./includes/
HDR       = $(addprefix $(HDR_DIR), $(HDR_LIST))

STR_SRCS  = ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
			ft_substr.c ft_split.c ft_strcasecmp.c
STR_DIR   = ./srcs/str/
STR_OBJS  = $(addprefix $(STR_DIR), $(STR_SRCS:.c=.o))

CHAR_SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_tolower.c ft_toupper.c
CHAR_DIR  = ./srcs/char/
CHAR_OBJS = $(addprefix $(CHAR_DIR), $(CHAR_SRCS:.c=.o))

MEM_SRCS  = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_realloc.c
MEM_DIR   = ./srcs/mem/
MEM_OBJS  = $(addprefix $(MEM_DIR), $(MEM_SRCS:.c=.o))

CONV_SRCS = ft_atoi.c ft_itoa.c ft_atoi_endptr.c
CONV_DIR  = ./srcs/conv/
CONV_OBJS = $(addprefix $(CONV_DIR), $(CONV_SRCS:.c=.o))

PUT_SRCS  = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
PUT_DIR   = ./srcs/put/
PUT_OBJS  = $(addprefix $(PUT_DIR), $(PUT_SRCS:.c=.o))

LST_SRCS  = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
LST_DIR   = ./srcs/lst/
LST_OBJS  = $(addprefix $(LST_DIR), $(LST_SRCS:.c=.o))

GNL_SRCS = get_next_line.c
GNL_DIR  = ./srcs/gnl/
GNL_OBJS = $(addprefix $(GNL_DIR), $(GNL_SRCS:.c=.o))

OBJS 		= $(STR_OBJS) $(CHAR_OBJS) $(MEM_OBJS) $(CONV_OBJS) $(PUT_OBJS) $(GNL_OBJS)
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
