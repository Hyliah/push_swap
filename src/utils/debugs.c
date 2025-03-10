/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:01:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 21:48:33 by hlichten         ###   ########.fr       */
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
		//ft_printf("ceci est un index %d\n", current->index);
		//ft_printf("prt node %p\n", current);
		current = current->next;
	}
	ft_printf("\n");
}
