/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baseup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:36:26 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:04:14 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_baseup(unsigned long int nb)
{
        int     count;
        char    *hexa;

        count = 0;
        hexa = "0123456789ABCDEF";
        if (nb >= 16)
                count += ft_baseup(nb / 16);
        count += ft_putchar(hexa[nb % 16]);
        return (count);
}
