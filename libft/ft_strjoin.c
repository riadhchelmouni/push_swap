/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:47:10 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:48:31 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	s1_ln;
	size_t	s2_ln;
	size_t	stot_ln;
	char	*rn;

	if (!s1 && !s2)
		return (ft_strdup(" "));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_ln = ft_strlen((char *)s1);
	s2_ln = ft_strlen(s2);
	stot_ln = s1_ln + s2_ln + 1;
	rn = malloc(sizeof(char) * stot_ln);
	if (!rn)
		return (0);
	ft_memmove(rn, s1, s1_ln);
	ft_memmove(rn + s1_ln, s2, s2_ln);
	rn[stot_ln - 1] = '\0';
	return (rn);
}
