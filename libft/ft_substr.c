/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:48:56 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/04/03 21:29:24 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*rn;
	size_t	s_l;
	size_t	a;

	if (!s)
		return (NULL);
	s_l = ft_strlen(s);
	if (start > s_l)
		return (ft_strdup(""));
	if (len > (s_l - start))
		len = s_l - start;
	a = len;
	rn = (char *)malloc(a + 1);
	if (!rn)
		return (NULL);
	a = 0;
	while (a < len)
	{
		rn[a] = s[start + a];
		a++;
	}
	rn[a] = '\0';
	return (rn);
}
