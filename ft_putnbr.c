/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:37:09 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:03:13 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	static int	count;
	unsigned int	i;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i <= 9)
		count += ft_putchar(i + 48);
	else
	{
		ft_putnbr(i / 10);
		count += ft_putchar(i % 10 + 48);
	}
	return (count);
}
