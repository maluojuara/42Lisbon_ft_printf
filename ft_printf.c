/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 22:36:18 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/06/27 22:36:22 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_checker(char format, va_list *args, int *len)
{
	if (format == 'c')
		ft_putchar((char)va_arg(*args, int), len);
	if (format == 's')
		ft_putstr(va_arg(*args, char *), len);
	if (format == 'p')
		ft_putadress(va_arg(*args, unsigned long), len);
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(*args, int), len);
	if (format == 'u')
		ft_putnbr_unsigned(va_arg(*args, unsigned int), len);
	if (format == 'x')
		ft_puthexa_low(va_arg(*args, unsigned int), len);
	if (format == 'X')
		ft_puthexa_up(va_arg(*args, unsigned int), len);
	if (format == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *toprint, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, toprint);
	while (*toprint)
	{
		if (*toprint != '%')
			ft_putchar(*toprint, &len);
		if (*toprint == '%' && *(toprint + 1) != '\0')
		{
			toprint++;
			format_checker(*toprint, &args, &len);
		}
		toprint++;
	}
	va_end(args);
	return (len);
}
