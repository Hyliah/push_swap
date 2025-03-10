/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:46 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 23:55:20 by hlichten         ###   ########.fr       */
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

# define ERROR_FAILURE "Error\n"
# define ERROR_SUCCESS "Error\n"

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
	int		inedx_min;
	int		index_max;
	int		cnt_node;
	t_node	*head;
}	t_stack;


t_node  *create_node(int value);

void    ra(t_stack *stack_a);
void	swap_2(t_stack *stack_a);
void    ft_free(t_stack **stack);
void    init_list(t_stack *stack);
void	print_lists(t_stack *stack);
void 	ft_exit_success(t_stack *sa);
void 	ft_exit_failure(t_stack *sa);
void	ps_assign_index(t_stack *stack);
void 	end_program(t_stack *sa, t_stack *sb);
void	ps_parsing(char **av, t_stack *stack_a);
void	swap_3(t_stack *stack_a, t_stack *stack_b);
void	swap_4(t_stack *stack_a, t_stack *stack_b);
void	swap_5(t_stack *stack_a, t_stack *stack_b);
void    insert_node_back(t_stack *stack, t_node *new_node);
void	insert_node_front(t_stack *stack, t_node *new_node);
void	send_to_function(t_stack *stack_a, t_stack *stack_b);

#endif