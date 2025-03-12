/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:08:55 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 21:20:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_assign_index(t_stack *stack)
{
	int		count;
	t_node	*current;
	t_node	*evaluated;

	evaluated = stack->head;
	while (evaluated)
	{
		current = stack->head;
		count = 0;
		while (current)
		{
			if (current->value < evaluated->value)
				count++;
			current = current->next;
		}
		evaluated->index = count;
		evaluated = evaluated->next;
	}
}

void	send_to_function(t_stack *stack_a, t_stack *stack_b)
{
	int	size;

	size = stack_a->cnt_node;
	if (size == 1)
		end_program(stack_a);
	else if (size == 2)
		swap_2(stack_a);
	else if (size == 3)
		swap_3(stack_a, stack_b);
	else if (size == 4)
		swap_4(stack_a, stack_b);
	else if (size == 5)
		swap_5(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}
