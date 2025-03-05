/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:31:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 22:14:51 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node   *create_node(int value)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
	new_node->value = value;
    new_node->index = 0;
    new_node->push_cost = 0;
    new_node->top_median = FALSE;
    new_node->cheapest = FALSE;
    new_node->target_node = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    return (new_node);
}

void	insert_node_front(t_stack *stack, t_node *new_node) // les push
{
	if (!new_node || !stack)
		return ;
	new_node->next = stack->head;
    if(stack->head)
        stack->head->prev = new_node;
    return (new_node);
}

void    insert_node_back(t_stack *stack, t_node *new_node) // que a l initalisation
{
    t_node *current;

	if (!new_node || !stack)
		return ;
    if(!stack->head)
        stack->head = new_node;
    else
    {
        current = stack->head;
        while (current->next)
            current = current->next;
    }
    current->next = new_node;
    new_node->prev = current;
}
