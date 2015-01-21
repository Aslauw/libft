/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:58:45 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/21 12:26:44 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	len = (ft_strlen(s1) > ft_strlen(s2)) ? ft_strlen(s1) : ft_strlen(s2);
	len = (len < n) ? len : n;
	return (ft_memcmp(s1, s2, len));
}
