/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:24:38 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/28 08:15:25 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dt, const char *cs, size_t dtsz)
{
	size_t	dstn;
	size_t	csn;
	size_t	n;

	dstn = ft_strlen(dt);
	csn = ft_strlen(cs);
	if (dtsz == 0)
		return (csn);
	else if (dstn >= dtsz)
		return (dtsz + csn);
	else
	{
		n = 0;
		while (n < dtsz - dstn - 1 && cs[n])
		{
			dt[dstn + n] = cs[n];
			n++;
		}
		dt[dstn + n] = '\0';
		return (dstn + csn);
	}
}
