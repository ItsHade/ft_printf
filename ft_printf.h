/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:31:20 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:23:40 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int ft_printf(const char *str, ...);

int ft_checkconv(char c, va_list ap);

int ft_putchar(int c);

int ft_putstr(char *s);

int ft_putnbr(int nb);

int ft_strlen(char *s);

int ft_baselow(unsigned long int nb);

int ft_putnbrun(unsigned int nb);

int ft_baseup(unsigned long int nb);

int ft_puthexa(unsigned long ptr);

#endif
