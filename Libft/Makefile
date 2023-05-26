NAME = libft.a

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
	ft_striteri.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_memset.c  ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	main.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all:	${NAME}

#${NAME}: ${SRCS}
#	cc -o ${NAME} ${SRCS} -Ilibft.h ${FLAGS}

#making a static library ar is the command and rcs mean replace, create and sorted
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

#compile the source code so that we have object files to use to create a library
${OBJS}: ${SRCS}
	cc -c ${SRCS} ${FLAGS} libft.h

test: ${OBJS}
	cc -o TEST ${SRCS} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} TEST

re: fclean all

.PHONY: all clean fclean test
