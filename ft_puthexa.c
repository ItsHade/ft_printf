/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:36:58 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:09:55 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_puthexa(unsigned long nb)
{
    int    count;

    count = 0;
    if (nb == 0)
    {
	   write(1, "(nil)", 5);
	   return (5); 
    }
    if (nb > 0)
        count += (ft_putstr("0x") + ft_baselow(nb));
    return (count);
}
