/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:36:40 by alam              #+#    #+#             */
/*   Updated: 2017/02/04 16:36:43 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnwstr(wchar_t const *s, int n)
{
	int i;
	int size;

	if (s == NULL || n < 0)
		return (-1);
	i = 0;
	size = 0;
	while (s[i] != '\0' && i < n)
	{
		size += ft_putwchar(s[i]);
		i++;
	}
	return (size);
}
