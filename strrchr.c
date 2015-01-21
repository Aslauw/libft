/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:27:04 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/19 17:36:12 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s) - 1;
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)&(s[i]));
		i--;
	}
	if (s[0] == c)
		return ((char *)&(s[0]));
	return (NULL);
}
