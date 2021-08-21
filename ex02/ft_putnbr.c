/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:41:15 by hbendani          #+#    #+#             */
/*   Updated: 2021/08/14 17:03:16 by hbendani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 )
	{
		nb = -nb;
		put_char('-');
	}
	if (nb == -2147483648)
	{
		put_char('2');
		nb = 147483648;
	}
	if (nb < 10)
	{
		put_char(nb + '0');
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
