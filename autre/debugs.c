/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:01:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 19:57:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_lists(t_stack *stack)
{
	t_node *current;
	
	current = stack->head;

	while(current)
	{
		printf("| val :	\033[1;35m%d\033[0m	|	\033[1;36m%d\033[0m	: ind |\n", current->value, current->index);
		current = current->next;
	}
	printf("| max :	\033[1;31m%d\033[0m	|	\033[1;34m%d\033[0m	: min |\n", stack->idx_max, stack->idx_min);
	ft_printf("\n");
}
