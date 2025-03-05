/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:31:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 01:02:37 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack    *create_node(int *value) // ex00
{
    t_stack *new_node;
    t_stack *last_node;

    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return (NULL);
    
    new_node->value = value;
    new_node->next = NULL;
    return (new_node);
}

void	assign_node(t_stack **stack, int *value) // ex01 est ce que nb est en mode pointer ou en int ??? 
{
	t_stack *new_node;
	t_stack *last_node;

	if (!stack)
		return ;
	new_node = new_elem(value);
	if (!(*stack))
	{
		stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = new_node;
		new_node->prev = last_node; 
	}
}
