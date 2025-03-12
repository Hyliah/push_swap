/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:59:47 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 20:55:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *stack)
{
	int		max;
	t_node	*current;

	if (!stack || !stack->head)
		return (0);
	current = stack->head;
	max = current->index;
	while (current)
	{
		if (max < current->index)
			max = current->index;
		current = current->next;
	}
	stack->idx_max = max;
	return (max);
}

int	find_min(t_stack *stack)
{
	int		min;
	t_node	*current;

	if (!stack || !stack->head)
		return (0);
	current = stack->head;
	min = current->index;
	while (current)
	{
		if (min > current->index)
			min = current->index;
		current = current->next;
	}
	stack->idx_min = min;
	return (min);
}

int	find_placement(t_stack *stack, int index)
{
	t_node	*tmp;
	int		count;

	tmp = stack->head;
	count = 0;
	while (tmp && tmp->index != index)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	update_min_max(t_stack *stack_a, t_stack *stack_b)
{
	find_max(stack_a);
	find_max(stack_b);
	find_min(stack_a);
	find_min(stack_b);
}
