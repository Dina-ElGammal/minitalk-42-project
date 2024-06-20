NAME = libftprintf.a
SRCS = ft_printf.c\
	ft_print_char.c\
	ft_print_str.c\
	ft_print_int.c\
	ft_print_hexa.c\
	ft_print_ptr.c\
	ft_print_unsigned_num.c
CC = cc
CFLAGS =  -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re