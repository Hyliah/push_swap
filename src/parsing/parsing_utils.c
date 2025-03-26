/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:13:25 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/26 17:13:53 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_valid_arg(char *arg, t_stack *stack_a)
{
	if (!is_valid_argument(arg))
		ft_exit_success(stack_a);
}

void	check_int_diff(int value, t_stack *stack_a)
{
	if (value > INT_MAX || value < INT_MIN)
		ft_exit_success(stack_a);
	if (!is_different(stack_a->head, value))
		ft_exit_success(stack_a);
}

void	check_good(t_node *new_node, t_stack *stack_a)
{
	if (!new_node)
		ft_free(stack_a);
}
