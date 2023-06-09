/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:01:01 by alouassi          #+#    #+#             */
/*   Updated: 2023/06/09 10:26:44 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

/*static int	bigestindex(t_stack *stack)
{
	int		ind;

	ind = stack->index;
	while (stack)
	{
		if (stack->index < ind)
			ind = stack->index;
		stack = stack->next;
	}
	return (ind);
}*/

static int bigestvalue(t_stack **stack)
{
	
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