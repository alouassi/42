/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:00:48 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/08 13:22:04 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*obt_min(t_stack **stack)
{
	t_stack	*a;
	t_stack	*min;
	int		b;

	min = NULL;
	b = 0;
	a = *stack;
	while (a)
	{
		if ((a->index == -1) && (b == 0 || a->value < min->value))
		{
			min = a;
			b = 1;
		}
		a = a->next;
	}
	return (min);
}

void	index_stack(t_stack **stack)
{
	t_stack	*a;
	int		index;

	index = 1;
	a = obt_min(stack);
	while (a)
	{
		a->index = index++;
		a = obt_min(stack);
	}
}
