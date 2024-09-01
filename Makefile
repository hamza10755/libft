CC = cc

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRCS =

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) (OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	re -rf $(NAME)

re: fclean all
