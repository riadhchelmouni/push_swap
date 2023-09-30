/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:04:48 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:39:00 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hystck, const char *needle, size_t ln)

{
	size_t	i;
	size_t	c;
	size_t	n_ln;
	char	*hy;

	i = 0;
	hy = (char *)hystck;
	n_ln = ft_strlen(needle);
	if (n_ln == 0 || hystck == needle)
		return (hy);
	while (hy[i] != '\0' && i < ln)
	{
		c = 0;
		while (hy[i + c] != '\0' && needle[c] != '\0'
			&& hy[i + c] == needle[c] && i + c < ln)
			c++;
		if (c == n_ln)
			return (hy + i);
			i++;
	}
	return (0);
}
