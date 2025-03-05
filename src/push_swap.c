/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:20 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 20:12:57 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack stack_a; //pas en pointeur comme ca pas besoin de malloc -> direct sur la stack
	t_stack stack_b;

	if (ac > 1)
	{
		init_list(&stack_a);
		init_list(&stack_b);
		ps_parsing(ac, av, &stack_a);

	}
	else
		ft_error();
    
	return (0);
}

// verification des entrées : que des int et pas ac<1 
// 1ere finction qui determine le plus petit et le plus grand nombre de la pile A 
// & le nombre d'éléments disponible dans la pile d entrée A 

//------------- liste fonctions ---------




