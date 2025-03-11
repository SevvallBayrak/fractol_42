CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBMLX = ./minilibx-linux
LIBMLXA = ./minilibx-linux/libmlx.a
NAME = fractol

SRC_DIR = .
OBJ_DIR = .
SRC_FILES = $(SRC_DIR)/main.c \
            $(SRC_DIR)/init.c \
            $(SRC_DIR)/events.c \
            $(SRC_DIR)/math_utils.c \
            $(SRC_DIR)/render.c \
            $(SRC_DIR)/utils.c
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)

INCLUDES = -I$(LIBMLX)

all: $(NAME) 

$(NAME): $(OBJ_FILES) $(LIBMLXA)
	$(CC) $(OBJ_FILES) -o $(NAME) $(LIBMLX)/libmlx.a -lX11 -lXext -lm

$(LIBMLXA) : $(LIBMLX)
	@make -C minilibx-linux > /dev/null 2>&1

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
