/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:46 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 22:58:24 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h> //int min & max macros

# ifndef DEBUG_MODE
#  define DEBUG_MODE 1
# endif

# define ERROR_NON_INT "pas cool\n"
# define ERROR_DIFF	"pas cool du tout\n"

typedef enum e_bool
{
	FALSE,
	TRUE
} t_bool;

typedef struct s_node
{
    int				value;
	int				index;
	
    struct s_node	*next;
    struct s_node	*prev;
}   t_node; // petit nom sympa qui permet d utiliser sans -> struct <- s_stack

typedef struct s_stack
{
	t_node	*head;
}	t_stack;


void    ft_free(t_stack **stack);
void	ft_error(void);
void	ps_parsing(int ac, char **av, t_stack *stack_a);
void    init_list(t_stack *stack);
t_node  *create_node(int value);
void	insert_node_front(t_stack *stack, t_node *new_node);
void    insert_node_back(t_stack *stack, t_node *new_node) ;
void	ps_assign_index(t_stack *stack);
void	print_lists(t_stack *stack);

#endif