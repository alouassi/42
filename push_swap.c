/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:19:02 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/07 17:03:09 by alouassi         ###   ########.fr       */
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

int	ft_dejatri(t_stack **stack)
{
	t_stack	*a;

	a = *stack;
	while (a->next != NULL)
	{
		if (a->value > a->next->value)
			return (1);
		a = a->next;
	}
	return (0);
}

static void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) <= 3)
		ft_sort3(stack_a);
	else if (ft_lstsize(*stack_a) <= 5)
		ft_sort5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) <= 100)
		ft_algomax(stack_a, stack_b, 12);
	else if (ft_lstsize(*stack_a) > 100)
		ft_algomax(stack_a, stack_b, 30);
}

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc < 2)
		return (1);
	if (argc == 2)
		return (0);
	//ft_argument(argc, argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (ft_dejatri(stack_a) == 1) 
		push_swap(stack_a, stack_b);
		system("leaks push_swap");
	return (0);
}