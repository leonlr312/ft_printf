NAME = libftprintf.a
CC = gcc -g3
CFLAGS = -Wall -Wextra -Werror -Wpedantic -Wformat=2
BUILD = ./objs/
VPATH = ./utils/ ./handle/
SRC =	ft_calloc.c ft_itoa_base.c ft_strdup.c \
		ft_strlen.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_printf.c \
		ft_handle_character.c ft_handle_decimal.c \
		ft_handle_hex_lower.c ft_handle_hex_upper.c \
		ft_handle_percent.c ft_handle_pointer.c \
		ft_handle_string.c ft_handle_unsigned.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		@ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		mkdir -p $(BUILD)
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -rf $(BUILD)
fclean: clean
		rm -f *.a
re: fclean all
.PHONY: all clean fclean re
