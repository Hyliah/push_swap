/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:08:55 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 22:58:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_assign_index(t_stack *stack) //fonctionne pas sur nb impair
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

// int is_sorted(t_stack stack)
// {
//     // if is_sorted return 0
//     // else return 1
//     // while stack
//     //if (stack->value > stack->next->value)
//     //return 0
// }