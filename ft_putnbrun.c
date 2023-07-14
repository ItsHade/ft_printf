/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:37:18 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:03:36 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrun(unsigned int nb)
{
	static int	count;

	count = 0;
        if (nb <= 9)
               count += ft_putchar(nb + 48);
        else
        {
                ft_putnbrun(nb / 10);
                count += ft_putchar(nb % 10 + 48);
        }
	return (count);
}
