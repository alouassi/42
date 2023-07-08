/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:39:17 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/08 13:21:03 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	skip(int n, char**argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == n)
			return (1);
		i++;
	}
	return (0);
}

static int	numeric(char *n)
{
	int	i;

	i = 0;
	if (n[0] == '-')
		i++;
	while (n[i])
	{
		if (!ft_isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_argument(char **argv)
{
	int		i;
	char	**ar;
	long	num;

	i = 1;
	ar = argv;
	while (ar[i])
	{
		num = ft_atoi(ar[i]);
		if (!numeric(ar[i]))
			ft_error("error\n");
		if (skip(num, ar, i))
			ft_error("error\n");
		if (num < -2148473648 || num > 2148473648)
			ft_error("error\n");
		i++;
	}
}
