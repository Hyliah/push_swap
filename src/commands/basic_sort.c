/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:08:55 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 20:11:16 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_index(t_node *a, t_node *b)
{
	int tmp;

	tmp = a->index;
	a->index = b->index;
	b->index = tmp;
}

void ps_bubblesort(t_stack *stack) //fonctionne pas sur nb impair
{
	int swapped;
	t_node *current;
	t_node *last;

	if (!stack || !stack->head)
		return ;
	swapped = 1;
	last = NULL;
	while (swapped)
	{
		swapped = 0;
		current = stack->head;
		while (current->next != last)
		{
			if (current->value > current->next->value)
			{
				swap_index(current, current->next);
				swapped = 1;
			}
			current = current->next;
		}
		last = current;
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