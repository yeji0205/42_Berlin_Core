NAME = libft.a

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
	ft_striteri.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_memset.c  ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c \

OBJS = ${SRCS:.c=.o}
B_OBJS = ${B_SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all:	${NAME} bonus

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	cc -c ${SRCS} ${FLAGS} libft.h

bonus: ${B_OBJS}
	ar rcs ${NAME} ${B_OBJS}

${B_OBJS}: ${B_SRCS}
	cc -c ${B_SRCS} ${FLAGS} libft.h

clean:
	rm -f ${OBJS}
	rm -f ${B_OBJS}

fclean: clean
	rm -f ${NAME} TEST

re: fclean all

.PHONY: all clean fclean bonus re
