/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_conversions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:58:18 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/17 16:22:22 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*3. Number conversion - %d - Prints a decimal (base 10) number
%i - Prints an integer in base 10
Without modifiers, they are basically the same*/

void	ft_putnbr(long long int nbr, int *i)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		*i += write(1, "-", 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, i);
		ft_putnbr(nbr % 10, i);
	}
	else
	{
		nbr += 48;
		*i += write(1, &nbr, 1);
	}
}

/*4. Unsigned number conversion - %u - Prints an unsigned
decimal (base 10) number.*/

void	ft_putnbr_unsigned(unsigned int nbr, int *i)
{
	if (nbr >= 10)
	{
		ft_putnbr_unsigned(nbr / 10, i);
		ft_putnbr_unsigned(nbr % 10, i);
	}
	else
	{
		nbr += 48;
		*i += write(1, &nbr, 1);
	}
}

/*5. Hexadecimal lowercase - %x - Prints a number in
hexadecimal (base 16) lowercase format.*/

void	ft_puthexa_low(unsigned int nbr, int *i)
{
	char	str[20];
	int		index;

	index = 0;
	if (nbr == 0)
		ft_putchar('0', i);
	else
	{
		while (nbr != 0)
		{
			str[index] = "0123456789abcdef"[nbr % 16];
			nbr /= 16;
			index++;
		}
		while (index--)
			ft_putchar(str[index], i);
	}
}

/*5. Hexadecimal uppercase - %X - Prints a number in
hexadecimal (base 16) uppercase format.*/

void	ft_puthexa_up(unsigned int nbr, int *i)
{
	char	str[20];
	int		index;

	index = 0;
	if (nbr == 0)
		ft_putchar('0', i);
	while (nbr != 0)
	{
		str[index] = "0123456789ABCDEF"[nbr % 16];
		nbr /= 16;
		index++;
	}
	while (index--)
		ft_putchar(str[index], i);
}

/*6. Adress (pointers) - %p - The void * pointer
argument has to be printed in hexadecimal format.*/

void	ft_putadress(unsigned long nbr, int *i)
{
	if (nbr == ULONG_MAX)
		*i += write(1, "0xffffffffffffffff", 18);
	else if ((long long)nbr == LONG_MIN)
		*i += write(1, "0x8000000000000000", 18);
	else if ((long long)nbr == LONG_MAX)
		*i += write(1, "0x7fffffffffffffff", 18);
	else if (nbr == 0)
		ft_putstr("(nil)", i);
	else
	{
		ft_putstr("0x", i);
		ft_puthexa_low(nbr, i);
	}
}
