# Nom de l'exécutable
NAME = push_swap

# Dossiers source et objet
SRCDIR = src
OBJDIR = obj

# Librairies
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
PRINTFDIR = ./ft_printf
PRINTF = $(PRINTFDIR)/libftprintf.a

# Compilateur et options
CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror
INCLUDE = -I include

RM = rm -rf

vpath %.c \
    $(SRCDIR) \
    $(SRCDIR)/lists_utils \
    $(SRCDIR)/parsing \
    $(SRCDIR)/utils \
    $(SRCDIR)/commands

# Sources et fichiers objets
SRC = push_swap.c \
    ps_parsing.c \
    creation_list.c \
    manage_list.c \
    mini_swap.c \
    exit_and_errors.c  \
    radix.c \
    basic_sort.c \
    op_push.c \
    op_rotate_swap.c \
    parsing_utils.c \

OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

all: $(OBJDIR) $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) all -C $(LIBFTDIR)

$(PRINTF):
	$(MAKE) all -C $(PRINTFDIR)

# Compilation des fichiers objets
$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Création du dossier obj
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Compilation de l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

# Nettoyage des fichiers objets
clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)
	$(MAKE) clean -C $(PRINTFDIR)

# Nettoyage complet (fichiers objets + exécutable + dossier obj)
fclean: clean
	$(RM) $(NAME) $(OBJDIR)
	$(MAKE) fclean -C $(LIBFTDIR)
	$(MAKE) fclean -C $(PRINTFDIR)

# Recompiler tout
re: fclean all

.PHONY: all clean fclean re
