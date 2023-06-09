/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 07:01:08 by alouassi          #+#    #+#             */
/*   Updated: 2023/06/08 21:53:21 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	int		tmp;
	t_stack	*a;

	a = *stack;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	tmp = a->index;
	a->index = a->next->index;
	a->next->index = tmp;
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	write (1, "sa\n", 3);
}

void	ft_sb(t_stack **stack_b)
{
	ft_swap(stack_b);
	write (1, "sb\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	write (1, "ss\n", 3);
}
