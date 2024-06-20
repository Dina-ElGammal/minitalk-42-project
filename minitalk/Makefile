NAME = server
CLIENT = client

SRC_SERVER = server.c
SRC_CLIENT = client.c

LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a
CC = cc
CFLAGS =  -Wall -Wextra -Werror
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(NAME) $(CLIENT)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(CLIENT): $(LIBFT) $(FT_PRINTF) $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) $(FT_PRINTF) -o $(CLIENT)

$(LIBFT):
	make -C libft

$(FT_PRINTF):
	make -C ft_printf

clean:
	make -C ft_printf clean
	make -C libft clean
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	make -C ft_printf fclean
	make -C libft fclean
	rm -rf $(NAME) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re