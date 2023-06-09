/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:19:02 by alouassi          #+#    #+#             */
/*   Updated: 2023/06/09 09:25:24 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	init_stack(t_stack **stack, int argc, char **argv)
{
	t_stack	*new;
	int		i;
	char	**a;

	i = 1;
	a = argv;
	if (argc > 2)
	{
		while (a[i])
		{
			new = ft_lstnew(ft_atoi(a[i]));
			ft_lstadd_back(stack, new);
			i++;
		}
		index_stack(stack);
	}
}

/*static void	push_swap(t_stack **stack_a)
{
	if (ft_lstsize(*stack_a) <= 3)
		ft_sort3(stack_a);
}*/

/*void	rien(t_stack **stack_a)
{
	t_stack	*b;

	b = *stack_a;
	while (b)
	{
		printf("%d\n", b->index);
		b = b->next;
	}
}*/

void	val(t_stack **stack_a)
{
	t_stack	*b;

	b = *stack_a;
	while (b)
	{
		printf("%d\n", b->value);
		b = b->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc < 2)
		return (-1);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	//rien(stack_a);//
	write (1, "\n", 1);
	val(stack_a);
	//push_swap(stack_a);//
	ft_sa(stack_a);
	val(stack_b);
	write (1, "\n", 1);
	val(stack_a);
	return (0);
}