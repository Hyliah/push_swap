/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:59:47 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 02:08:32 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_list(void)
{
	// suppression de la liste et de tous les noeuds et malloc
	// free
}

int	find_max(t_stack *stack)
{
	int		max;
	t_node	*current;

	if (!stack || !stack->head)
		return (0);
	max = stack->head->index;
	current = stack->head;
	while (current)
	{
		if (max < current->index)
			max = current->index;
		current = current->next;
	}
	stack->idx_max = max;
	ft_printf("Max trouvé : %d\n", stack->idx_max);  // Vérification debug
	return (max);
}

int	find_min(t_stack *stack)
{
	int		min;
	t_node	*current;

	if (!stack || !stack->head)
		return (0);
	min = stack->head->index;
	current = stack->head;
	while (current)
	{
		if (min > current->index)
			min = current->index;
		current = current->next;
	}
	stack->idx_min = min;
	return (min);
}