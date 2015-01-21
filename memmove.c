/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 15:22:31 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/19 15:39:25 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*d;
	size_t				i;

	if (src == NULL || dst == NULL)
		return (NULL);
	p = dst;
	d = src;
	i = 0;
	while (i < len)
	{
		p[i] = d[i];
		i++;
	}
	return (dst);
}
