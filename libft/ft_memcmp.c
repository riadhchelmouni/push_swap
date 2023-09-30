/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:58:52 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/28 10:27:26 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ri, const void *ya, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char *)ri)[a] != ((unsigned char *)ya)[a])
			return (((unsigned char *)ri)[a] - ((unsigned char *)ya)[a]);
		a++;
	}
	return (0);
}
