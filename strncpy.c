/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 16:30:54 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/21 12:25:46 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	if (src == NULL || dst == NULL)
		return (NULL);
	ft_memccpy(dst, src, '\0', n);
	return (dst);
}
