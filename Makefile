CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf_utils.c \
	ft_printf.c \
	ft_putnbr.c \
	ft_putnbr_u.c \
	ft_putptr.c \
	ft_putnbr_tohex.c \
	ft_putnbr_tohex_cap.c \


OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
