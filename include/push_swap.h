/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:46 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 22:10:38 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h> //int min & max macros

typedef enum e_bool
{
	FALSE,
	TRUE
} t_bool;

typedef struct s_node
{
    int				value;
	int				index;
	int				push_cost;
	t_bool			top_median; // 1 si va aller en haut 
	t_bool			cheapest; // 1 est le moins couteux a deplacer
	struct s_node	*target_node;
	
    struct s_node	*next;
    struct s_node	*prev;
}   t_node; // petit nom sympa qui permet d utiliser sans -> struct <- s_stack

typedef struct s_stack
{
	t_node	*head;
}	t_stack;

void    init_list(t_stack *stack);
t_node  *create_node(int value);
void	ps_parsing(int ac, char **av, t_stack *stack_a);
void	insert_node_front(t_stack *stack, t_node *new_node, t_node *target_node);
void	insert_node_back(t_node *new_node, t_node *target_node);

#endif