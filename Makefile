CLIENT_NAME = client
SERVER_NAME = server
CLIENT_SRC = client.c
SERVER_SRC = server.c
LIBFT_PATH = libft
LIBFT_ARCHIVE = $(LIBFT_PATH)/libft.a
PRINT_PATH = printf
PRINTF_ARCHIVE = $(PRINT_PATH)/libftprintf.a
FLAGS = -Wall -Wextra -Werror


all: $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_SRC) $(LIBFT_ARCHIVE)
	gcc $(FLAGS) -o $(CLIENT_NAME) $(CLIENT_SRC) -L$(LIBFT_PATH) -lft

$(SERVER_NAME): $(SERVER_SRC) $(PRINTF_ARCHIVE)
	gcc $(CFLAGS) -o $(SERVER_NAME) $(SERVER_SRC) -L$(PRINT_PATH) -lftprintf

$(LIBFT_ARCHIVE):
	$(MAKE) -C $(LIBFT_PATH)

$(PRINTF_ARCHIVE):
	$(MAKE) -C $(PRINT_PATH)

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(MAKE) -C $(PRINT_PATH) clean

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(MAKE) -C $(PRINT_PATH) fclean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all

.PHONY: 
	all clean fclean re