/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:48:06 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/19 17:49:25 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (s2 == NULL)
		return ((char *)s1);
	if (s1 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s2);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			while (j < len && s1[i + j] == s2[j] && j < n)
				j++;
			if (j == len)
				return ((char *)&(s1[i]));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
