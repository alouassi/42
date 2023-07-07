/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:13:32 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/07 16:14:15 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_maxval(t_stack **stack)
{
	t_stack	*a;
	t_stack	*max;

	a = *stack;
	max = *stack;
	while (a)
	{
		if (a->value > max->value)
			max = a;
		a = a->next;
	}
	return (max); 
}

int	ft_posi(t_stack **stack, t_stack **max)
{
	int	pos;
	t_stack	*a;

	pos = 1;
	a = *stack;
	while (a)
	{
		if (a->value == (*max)->value)
			return (pos); 
		a = a->next;
		pos++;
	}
	return (pos);
}

void	ft_algo2(t_stack **stack_a, t_stack **stack_b)
{
	int	posi;
	int	len;
	t_stack	*max;

	while (*stack_b)
	{
		max = ft_maxval(stack_b);
		posi = ft_posi(stack_b, &max);
		len = ft_lstsize(*stack_b) / 2;
		while (posi <= len && (*stack_b)->value != max->value)
			ft_rb(stack_b);
		while (posi > len && (*stack_b)->value != max->value)
			ft_rrb(stack_b);
		ft_pa(stack_a, stack_b);
	}
}

void	ft_algomax(t_stack **stack_a, t_stack **stack_b, int tailemax)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index < (tailemax + i))
		{
			ft_pb(stack_a, stack_b);
			i++;
			if ((*stack_b)->index > ft_lstsize(*stack_b))
				ft_rb(stack_b);
		}
		else
			ft_ra(stack_a);
	}
	ft_algo2(stack_a, stack_b);
}