/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:46 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/26 17:16:34 by hlichten         ###   ########.fr       */
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

# define ERROR_FAILURE "Error\n"
# define ERROR_SUCCESS "Error\n"

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int		idx_min;
	int		idx_max;
	int		cnt_node;
	int		placement;
	t_node	*head;
}	t_stack;

t_node	*create_node(int value);

t_bool	is_valid_argument(char *arg);
t_bool	is_different(t_node *node, long value);

int		find_min(t_stack *stack);
int		find_max(t_stack *stack);
int		find_placement(t_stack *stack, int index);

void	ra(t_stack *stack_a);
void	sa(t_stack *stack_a);
void	rra(t_stack *stack_a);
void	ft_free(t_stack *stack);
void	swap_2(t_stack *stack_a);
void	init_list(t_stack *stack);
void	print_lists(t_stack *stack);
void	end_program(t_stack *stack_a);
void	ps_assign_index(t_stack *stack);
void	ft_exit_success(t_stack *stack_a);
void	ft_exit_failure(t_stack *stack_a);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ps_parsing(char **av, t_stack *stack_a);
void	radix(t_stack *stack_a, t_stack *stack_b);
void	swap_3(t_stack *stack_a, t_stack *stack_b);
void	swap_4(t_stack *stack_a, t_stack *stack_b);
void	swap_5(t_stack *stack_a, t_stack *stack_b);
void	check_int_diff(int value, t_stack *stack_a);
void	check_valid_arg(char *arg, t_stack *stack_a);
void	check_good(t_node *new_node, t_stack *stack_a);
void	update_min_max(t_stack *stack_a, t_stack *stack_b);
void	insert_node_back(t_stack *stack, t_node *new_node);
void	send_to_function(t_stack *stack_a, t_stack *stack_b);

#endif