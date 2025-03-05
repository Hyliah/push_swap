/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:51:16 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 01:02:54 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_different(int *stack, long value)
{
	//va checker si le tableau contient que des elements differents 
	// si tous differents retour 1 sinon retour 0
	// while (stack j)
	//{
	//      while (stack i)
	//        if()
	//          return (1);
	//      return 0;  
	//}

		//while de nb de ac
	// if c-est un nb 
	// ---> nb dans un node
	// check if different  --> voir le union de Pieric
}

int is_nubmer(char *av_i)
{
	
	// va checker si ce qui est entré est >= '0' && <= '9'


	// if c est un "nb  nb  nb" 
	// ---> fonction de decryptage de ces diffents nb 
	//    if (>= 0 && <= 9 et des ' ');
	// check if diffrent

}
void ps_parsing(int ac, char **av, t_stack **stack_a)
{
	long    value;
	int     i;

	i = 0;
	while (av[i])
	{
		if (!is_number(av[i]))
			ft_free(&stack_a);
		value = ft_atol(av[i]);
		if (value > INT_MAX || value < INT_MIN)
			ft_free(&stack_a);
		if  (!is_different(*stack_a, value))
			ft_free(&stack_a);
		assign_node(stack_a, (int)value);
		i++;       
	}
}


