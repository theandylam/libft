/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprintstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:45:01 by alam              #+#    #+#             */
/*   Updated: 2016/11/10 14:45:03 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprintstr(t_list **lst)
{
	t_list *node;

	node = *lst;
	while (node != NULL)
	{
		ft_putendl(node->content);
		node = node->next;
	}
}
