/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:51:16 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/09 20:00:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void handle_non_integer(t_stack *s)
{
	(void)s;
	write(2, ERROR_NON_INT, ft_strlen(ERROR_NON_INT));
	//ft_free()
	exit(EXIT_SUCCESS);
}

static void handle_different(t_stack *s)
{
	(void)s;
	write(2, ERROR_DIFF, ft_strlen(ERROR_DIFF));
	//ft_free()
	exit(EXIT_SUCCESS);
}
t_bool is_different(t_node *node, long value)
{
	t_node *tmp;

	tmp = node;
	while (tmp != NULL)
	{	
		if (tmp->value == value)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

t_bool	is_valid_argument(char *arg)
{
	int		i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]) && arg[i] != ' ' 
			&& arg[i] != '-' && arg[i] != '+')
			return (FALSE);
		i++;
	}
	return (TRUE);
}

char	*create_value(char *arg, t_stack *stack_a, int *j)
{
	char		*value;

	value = NULL;
	while(arg[*j])
	{
		while(arg[*j] == ' ')
			(*j)++;
		value = arg + *j;
		if(arg[*j] == '+' || arg[*j] == '-')
		{
			if (!ft_isdigit(arg[*j + 1]))
				handle_non_integer(stack_a);
				//ft_free(&stack_a);
			(*j)++;
		}
		while(ft_isdigit(arg[*j]))
			(*j)++;
		while(arg[*j] == ' ')
			(*j)++;
		return(ft_strndup(value, arg + *j - value));
	}
	return (NULL);
}


void ps_parsing(int ac, char **av, t_stack *stack_a)
{
	char	*str;
	long    value;
	int     i;
	int		j;
	t_node	*new_node;

	(void)ac;
	i = 0;
	while (av[i] && av && av[i][0])
	{
		if (!is_valid_argument(av[i]))
			handle_non_integer(stack_a);
			//ft_free(&stack_a); // check si les arg valides sinon on free
		j = 0;
		while (av[i][j])
		{
			str = create_value(av[i], stack_a, &j);
			if(!(*str))
				return ;
			value = ft_atol(str); // char devient integer 
			printf("val : %ld\n", value);
			if (value > INT_MAX || value < INT_MIN)
				handle_non_integer(stack_a);
				//ft_free(&stack_a);
			if  (!is_different(stack_a->head, value))
				handle_different(stack_a);
				//ft_free(&stack_a);
			new_node = create_node((int)value);
			if(!new_node)
				ft_free(&stack_a);
			insert_node_back(stack_a, new_node);
		}
		i++;  
	}
}
