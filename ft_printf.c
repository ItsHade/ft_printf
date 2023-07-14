/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:28:27 by dtenzen           #+#    #+#             */
/*   Updated: 2022/12/12 12:27:57 by dtenzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include <stdio.h>
#include "ft_printf.h"

int ft_checkconv(char c, va_list ap)
{
	int count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		count = ft_puthexa(va_arg(ap, unsigned long));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count = ft_putnbrun(va_arg(ap, unsigned int));
	else if (c == 'x')
		count = ft_baselow(va_arg(ap, unsigned long int));
	else if (c == 'X')
		count = ft_baseup(va_arg(ap, unsigned long int));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int ft_printf(const char *str, ...)
{
	va_list ap;
	size_t i;
	size_t count;
	va_start(ap, str);

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_checkconv(str[++i], ap);
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
/*
int main(void)
{
	printf("Affiche un seul caractère.\n");

	char c = 'a';
	printf("printf: %c\n", c);
	ft_printf("ft_printf: %c\n", c);

	printf("\n");
	printf("Affiche une chaîne de caractères\n");

	char o[] = "salut";
	printf("printf: %s\n", o);
	ft_printf("ft_printf: %s\n", o);

	printf("\n");
	printf("L’argument de pointeur void * doit être affiché en hexadécimal\n");

	int b = 4;
	int *ptr = &b;
	printf("printf : %p\n", ptr);
	ft_printf("ft_printf : %p\n", ptr);

	printf("\n");
	printf("Affiche un nombre décimal (base 10)\n");

	int y = 678;
	printf("printf : %d\n", y);
	ft_printf("ft_printf : %d\n", y);

	printf("\n");
	printf("Affiche un entier en base 10\n");

	int t = 6783456;
	printf("printf : %i\n", t);
	ft_printf("ft_printf : %i\n", t);

	printf("\n");
	printf("Affiche un nombre décimal non signé (base 10)\n");

	int x = 1345804;
	printf("printf : %u\n", x);
	ft_printf("ft_printf : %u\n", x);
	int z = -345;
	printf("printf : %u\n", z);
	ft_printf("ft_printf : %u\n", z);

	printf("\n");
	printf("Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.\n");

	int p = 635;
	printf("printf : %x\n", p);
	ft_printf("ft_printf : %x\n", p);

	printf("\n");
	printf("Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules\n");

	int u = 684567;
	printf("printf : %X\n", u);
	ft_printf("ft_printf : %X\n", u);

	printf("\n");
	printf("Affiche un signe pourcentage.\n");

	printf("printf: test : %%\n");
	ft_printf("ft_printf: test : %%\n");

	printf("_________________________\n");
	printf("----Test return value----\n");
	printf("_________________________\n");
	int count = 0;
	int count2 = 0;
	int a = 4567;
	char s[] = "test string";
	char h = 'a';
	count = printf("a = %d, string: %s, char: %c\n", a, s, h);
	printf("%d\n", count);
	count2 = ft_printf("a = %d, string: %s, char: %c\n", a, s, h);
	printf("%d\n", count2);
}
*/