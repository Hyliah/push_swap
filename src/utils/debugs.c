/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:01:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 22:56:35 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lists(t_stack *stack)
{
	t_node *current;
	
	current = stack->head;

	while(current)
	{
		ft_printf("| val :	%d	|	%d	: ind |\n", current->value, current->index);
		//ft_printf("ceci est un index %d\n", current->index);
		//ft_printf("prt node %p\n", current);
		current = current->next;
	}
	ft_printf("\n");
}
