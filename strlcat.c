/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:07:12 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/21 16:37:42 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (dst == NULL || src == NULL || size == 0)
		return (0);
	i = 0;
	len = ft_strlen(dst);
	tmp = ft_strdup(src);
	ft_memcpy(&dst[len], tmp, ft_strlen(tmp));
	dst[len + ft_strlen(tmp)] = '\0';
	free(tmp);
	return (ft_strlen(dst));
}
