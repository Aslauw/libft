/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:00:27 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/19 17:11:52 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ft_memccpy(&(s1[len1]), s2, '\0', len2);
	s1[len1 + len2] = '\0';
	return (s1);
}
