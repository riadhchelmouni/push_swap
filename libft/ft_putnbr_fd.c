/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:12:51 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/28 10:25:11 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)

{
	long	ri;

	ri = n;
	if (ri < 0)
	{
		ft_putchar_fd('-', fd);
		ri = -ri;
	}
	if (ri > 9)
	{
		ft_putnbr_fd(ri / 10, fd);
		ft_putchar_fd((ri % 10) + '0', fd);
	}
	else
		ft_putchar_fd(ri + '0', fd);
}
