
# nom de l'executable
NAME = push_swap

# Source and object diretories
SRCDIR = src
OBJDIR = $(SRCDIR)

# Librairies
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
PRINTFDIR = ./ft_printf
PRINTF = $(PRINTFDIR)/libftprintf.a

# Compiler and flags
CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror
INCLUDE = -I include

RM = rm -f 

vpath %.c \
	$(SRCDIR) \
	$(SRCDIR)/lists_utils \
	$(SRCDIR)/parsing \
	$(SRCDIR)/utils \
	$(SRCDIR)/commands

# Sources and object files
SRC = push_swap.c \
	utils.c \
	ps_parsing.c \
	creation_list.c \
	manage_list.c \
	handle_errors.c  \
	debugs.c \
	basic_sort.c \
	#op_push.c \
	op_rev_rotate.c \
	op_rotate.c \
	op_swap.c

OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
#mini_swap.c
all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) all -C $(LIBFTDIR)

$(PRINTF):
	$(MAKE) all -C $(PRINTFDIR)
	
# Compile each .c file to .o		
$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

# Rule to clean up object files	
clean:
		$(RM) $(OBJS)
		$(MAKE) clean -C $(LIBFTDIR)
		$(MAKE) clean -C $(PRINTFDIR)

#Rule to clean  up object files and the library
fclean: clean
		$(RM) $(NAME)
		$(MAKE) fclean -C $(LIBFTDIR)
		$(MAKE) fclean -C $(PRINTFDIR)

# Rule to recompile everything
re: fclean all

.PHONY: all clean fclean re