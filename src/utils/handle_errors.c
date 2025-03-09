/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 16:43:11 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_free(t_stack **stack) //pas terminee 
{
	(void)stack;
	//appler clear lists/ 
// 	if (stack)
// 	{
// 		free(stack);
// 		stack = NULL;
// 	}
}
void	ft_error(void) // creation de la fonction d envoi d erreurs
{
	ft_printf("Error\n"); // mettre avec le fd
	exit(EXIT_FAILURE);
}