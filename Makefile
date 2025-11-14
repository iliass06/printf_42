NAME = libftprintf.a
CC = cc
SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putpointer.c ft_putstr.c
OBJCTS = ft_printf.o ft_putchar.o ft_puthex.o ft_putnbr_unsigned.o ft_putnbr.o ft_putpointer.o ft_putstr.o
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
HEADER = ft_printf.h

all: $(NAME)

$(NAME):$(OBJCTS)
	$(AR) $(NAME) $(OBJCTS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJCTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean