NAME = libft.a

SRCS = # have to include all the source files later!

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

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
