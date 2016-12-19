/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 09:16:32 by alam              #+#    #+#             */
/*   Updated: 2016/12/19 09:16:34 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long		neg_check(long num, int *minflag)
{
	if (num < 0)
	{
		if (num == -2147483648)
		{
			*minflag = 1;
			num++;
			ft_putchar('-');
			num *= -1;
		}
		else
		{
			ft_putchar('-');
			num *= -1;
			*minflag = 0;
		}
	}
	else
		*minflag = 0;
	return (num);
}

static	void	print_loop(int i, char number[])
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

void			ft_putlong(long n)
{
	char	number[10];
	int		i;
	int		j;
	int		msd_found;
	int		minflag;

	i = 10;
	j = 0;
	msd_found = 0;
	n = neg_check(n, &minflag);
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
	print_loop(i, number);
	return ;
}
