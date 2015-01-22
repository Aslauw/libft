/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 14:47:51 by lbinet            #+#    #+#             */
/*   Updated: 2015/01/22 14:09:29 by lbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (alst == NULL || *alst == NULL || new == NULL)
	{
		ft_putstr("KIKOU\n");
		return ;
	}
	new->next = *alst;
}
