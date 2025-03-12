/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_and_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 21:16:47 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack)
		return ;
	current = stack->head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	ft_exit_failure(t_stack *stack_a)
{
	write(2, ERROR_FAILURE, ft_strlen(ERROR_FAILURE));
	ft_free(stack_a);
	exit(EXIT_FAILURE);
}

void	ft_exit_success(t_stack *stack_a)
{
	write(2, ERROR_SUCCESS, ft_strlen(ERROR_SUCCESS));
	ft_free(stack_a);
	exit(EXIT_SUCCESS);
}

void	end_program(t_stack *stack_a)
{
	ft_free(stack_a);
	exit(EXIT_SUCCESS);
}
