/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:20 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/30 15:53:10 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	init_list(&stack_a);
	init_list(&stack_b);
	if (ac > 1)
	{
		if (av[1][0] == '\0')
			return (0);
		ps_parsing(++av, &stack_a);
		ps_assign_index(&stack_a);
		send_to_function(&stack_a, &stack_b);
	}
	ft_free(&stack_a);
	return (0);
}
