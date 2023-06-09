/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:37:17 by alouassi          #+#    #+#             */
/*   Updated: 2023/06/08 17:14:54 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	valeur;

	i = 0;
	sign = 1;
	valeur = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (sign * valeur);
}

void	ft_lstadd_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

int	ft_lstsize(t_stack *a)
{
	size_t	i;
	t_stack	*t;

	t = a;
	i = 0;
	while (t)
	{
		t = t->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_lstadd_back(t_stack **stack, t_stack *frist)
{
	t_stack	*a;

	if (*stack)
	{
		a = ft_lstlast(*stack);
		a->next = frist;
		frist->next = NULL;
	}
	else
	{
		*stack = frist;
		(*stack)->next = NULL;
	}
}
