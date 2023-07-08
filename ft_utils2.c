/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:25:34 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/08 13:21:22 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	if (!s)
		return ;
	n = 0;
	while (s[n] != '\0')
	{
		write(fd, &s[n], 1);
		++n;
	}
	write(fd, "\n", 1);
}
