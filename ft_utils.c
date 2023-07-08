/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:24:55 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/08 13:20:55 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

void	ft_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit (EXIT_FAILURE);
}

t_stack	*ft_lstnew(int value)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
