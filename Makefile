
NAME = libft.a

SRC = *.c

OTHERS = *.gch -c *.out

OBJS = ${SRC:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

RM = rm -f

all: $(NAME)

$(NAME):
			${CC} -c ${FLAGS} ${SRC} 
			ar crs ${NAME} ${OBJS}

clean:
			$(RM) ${OBJS} ${OTHERS}

fclean: clean
			${RM} ${NAME}

re:	fclean all

.PHONY: all, clean, fclean, re