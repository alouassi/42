/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:54:31 by alouassi          #+#    #+#             */
/*   Updated: 2023/06/08 09:52:38 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_stack **stack)
{
	t_stack	*debut;
	t_stack	*fin;

	debut = *stack;
	fin = ft_lstlast(debut);
	while (debut)
	{
		if (debut->next->next == NULL)
		{
			debut->next = NULL;
			break ;
		}
		debut = debut->next;
	}
	fin->next = *stack;
	*stack = fin;
}

void	ft_rra(t_stack **stack_a)
{
	ft_rev_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b)
{
	ft_rev_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	write (1, "rrr\n", 4);
}
