/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 09:16:32 by alam              #+#    #+#             */
/*   Updated: 2016/12/19 09:16:34 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_num(int i, char number[])
{
	int msd_found;

	msd_found = 0;
	while (i > 0)
	{
		if (((i - 1) == 0) && (msd_found == 0))
		{
			ft_putchar(number[i - 1]);
			i--;
		}
		else if ((number[i - 1] != '0') && (msd_found == 0))
		{
			msd_found = 1;
		}
		else if (msd_found)
		{
			ft_putchar(number[i - 1]);
			i--;
		}
		else
		{
			i--;
		}
	}
	return ;
}

void			ft_putlong_u(unsigned long n)
{
	char	number[10];
	int		i;
	int		j;
	int		minflag;

	i = 10;
	j = 0;
	while (j < 10)
	{
		number[j] = (n % 10) + 48;
		n /= 10;
		if (minflag)
		{
			number[0]++;
			minflag = 0;
		}
		j++;
	}
	print_num(i, number);
	return ;
}
