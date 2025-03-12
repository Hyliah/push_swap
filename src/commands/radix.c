/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:22:16 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 20:12:48 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;
	int	base_count;

	i = -1;
	base_count = stack_a->cnt_node;
	max_num = stack_a->cnt_node - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < base_count)
		{
			if (((stack_a->head->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (stack_b->cnt_node)
			pa(stack_a, stack_b);
	}
}
