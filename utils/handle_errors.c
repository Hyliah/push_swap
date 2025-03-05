#include "push_swap.h"

char    *ft_free(t_stack **stack)
{
	if (*stack)
	{
		free(*stack);
		*stack = NULL;
	}
	ft_printf("Error\n");
	return (NULL);
}
void ft_error(void) // creation de la fonction d envoi d erreurs
{
	ft_printf("Error\n");
		exit;
}