.DEFAULT = all

NAME = libftprintf.a

SRCS = $(SRCDIR)/ft_printf.c\
       $(SRCDIR)/ft_putadr.c\
       $(SRCDIR)/ft_puthexa.c\
       $(SRCDIR)/ft_putnbr_u.c\
       $(SRCDIR)/ft_putnbr.c\
       $(SRCDIR)/ft_putstr.c\
       $(SRCDIR)/ft_putchar.c

OBJS = $(SRCS:.c=.o)

SRCDIR = srcs
INCDIR = includes
LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(LIBFT) $(NAME)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCDIR) -I $(LIBFTDIR)/includes

RM = rm -f

$(LIBFT):
	make -C $(LIBFTDIR)

$(NAME): $(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re