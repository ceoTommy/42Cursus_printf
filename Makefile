NAME = libftprintf.a
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
SRC_DIR = src/
INCLUDE_DIR = include/

SRC_FILES = ft_printf_core \
				ft_print_char \
				ft_print_str \
				ft_print_ptr \
				ft_print_hex \
				ft_print_num \

C_FILES = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
O_FILES = $(addsuffix .o, $(SRC_FILES))

$(NAME):
	$(CC) $(CCFLAGS) -I . -c $(C_FILES)
	ar -rc $(NAME) $(O_FILES)

all: $(NAME)

clean: 
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
### Info ###

# NAME
# "-c" :  makes the compiler not link all the obj files.
# Instead it will create individual .o files for each compiled file
#
# "-I" :  searches your created libary instead of system libaries
#
# CLEAN
# "rm -f" : Force Removes
