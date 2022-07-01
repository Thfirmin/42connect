SRCS = ft_printf.c       \
	   ft_printf_utils.c \
	   ft_printf_funcs.c \

OBJS = ${SRCS:.c=.o}

AR = ar rcs
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -I include

.c.o:
	cc ${CFLAGS} -c &< -o ${<:.c=.o}

${NAME}: ${OBJS}
	cd ./libft && make && cp -v libft.a ../${NAME}
	${AR} ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	rm -rf ${OBJS}
	cd ./libft && make clean

fclean: clean
	rm -rf ${NAME}
	cd ./libft && make fclean

re: fclean all
	cd ./libft && make re

.PHONY: all clean fclean re
