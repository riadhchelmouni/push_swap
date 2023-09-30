/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:42:42 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/28 09:47:47 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *r, int y, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)r;
	ch = (unsigned char)y;
	while (n--)
	{
		if (*s == ch)
			return (s);
		s++;
	}
	return (NULL);
}
