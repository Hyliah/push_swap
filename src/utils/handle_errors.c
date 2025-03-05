/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 20:10:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *ft_free(t_stack *stack) //pas terminee 
{
	//appler clear lists/ 
	if (stack)
	{
		free(stack);
		stack = NULL;
		ft_error();
	}
	return (NULL);
}
void ft_error(void) // creation de la fonction d envoi d erreurs
{
	ft_printf("Error\n"); // mettre avec le fd
	exit;
}