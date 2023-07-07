/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:01:01 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/07 16:48:28 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static int	bigestindex(t_stack *stack)
{
	int		ind;

	ind = stack->index;
	while (stack)
	{
		if (stack->index > ind)
			ind = stack->index;
		stack = stack->next;
	}
	return (ind);
}

void	ft_algo1(t_stack **stack_a, t_stack **stack_b)
{
	int	posi;
	int	len;
	t_stack	*max;

	while (*stack_b)
	{
		max = ft_maxval(stack_b);
		posi = ft_posi(stack_b, &max);
		len = ft_lstsize(*stack_b) /2 ;
		while (posi <= len && (*stack_b)->value != max->value)
			ft_rb(stack_b);
		while (posi > len && (*stack_b)->value != max->value)
			ft_rrb(stack_b);
		ft_pa(stack_a, stack_b);
	}
}

void	ft_sort5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*max;

	max = ft_maxval(stack_a);
	while ((*stack_a)->next->next != NULL)
	{
		if (max->index == (*stack_a)->index || \
		max->index - 1 == ((*stack_a)->index))
			ft_ra(stack_a);
		else
			ft_pb(stack_a, stack_b);
	}
	if ((*stack_a)->value > (*stack_a)->next->value)
		ft_sa(stack_a);
	ft_algo1(stack_a, stack_b);
}



void	ft_sort3(t_stack **stack)
{
	int	h;

	h = bigestindex(*stack);
	if ((*stack)->index == h)
		ft_ra(stack);
	else if ((*stack)->next->index == h)
		ft_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_sa(stack);
}