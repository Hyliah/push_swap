/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_and_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 23:30:55 by hlichten         ###   ########.fr       */
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

void ft_exit_failure(t_stack *sa) //le programme ne fonctionne pas
{
	(void)sa;
	write(2, ERROR_FAILURE, ft_strlen(ERROR_FAILURE));
	//ft_free()
	exit(EXIT_FAILURE);
}

void ft_exit_success(t_stack *sa) //le programme fonctionne
{
	(void)sa;
	write(2, ERROR_SUCCESS, ft_strlen(ERROR_SUCCESS));
	//ft_free()
	exit(EXIT_SUCCESS);
}

void end_program(t_stack *sa, t_stack *sb)
{
	(void)sa;
	(void)sb;
	ft_printf("end_of_program"); //pour le debug
	//ft_free
	exit(EXIT_SUCCESS);
}

// utilisation des mallocs : creation node, create_value->strndup, 
// utiliser la delete list de manage_lists