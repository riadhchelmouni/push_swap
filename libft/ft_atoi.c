/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:33:27 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:56:12 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int num)
{
	if (num == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

long	ft_atoi(const char *sr)
{
	long	i;
	long	nbr;
	long	isneg;

	i = 0;
	nbr = 0;
	isneg = 1;
	while (sr[i] == ' ' || (sr[i] >= '\t' && sr[i] <= '\r'))
		i++;
	if (sr[i] == '-' && sr[i + 1] != '\0')
	{
		isneg = -1;
		i++;
	}
	else if (sr[i] == '+' && sr[i + 1] != '\0')
		i++;
	while (sr[i] != '\0')
	{
		if (sr[i] >= '0' && sr[i] <= '9')
			nbr = nbr * 10 + sr[i] - '0';
		else
			ft_error(0);
		i++;
	}
	return (isneg * nbr);
}
