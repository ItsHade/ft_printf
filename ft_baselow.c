/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baselow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:36:04 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:04:55 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_baselow(unsigned long int nb)
{
	int	count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (nb >= 16)
		count += ft_baselow(nb / 16);
	count += ft_putchar(hexa[nb % 16]);
	return (count);
}
