/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:06:46 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:46:25 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n)

{
	size_t	r;

	r = 0;
	if (n == 0)
	{
		while (src[r])
			r++;
		return (r);
	}
	while (r < n - 1 && src[r] != '\0')
	{
		dest[r] = src [r];
		r++;
	}
	if (r < n)
		dest[r] = '\0';
	while (src[r] != '\0')
		r++;
	return (r);
}
