NAME	:= push_swap
CFLAGS	:= -Wextra -Wall -Werror

HEADERS	:= -I ./include
LIBFT	:= ./lib/libft/libft.a
LIBFT_DIR	= ./lib/libft
SRCS	:= $(shell find ./src -iname "*.c")
OBJS	:= ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(HEADERS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all, clean, fclean, re