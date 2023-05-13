/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:11:54 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/13 02:56:36 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #include "ft_printf.h"

/*Conversions asked in the subjects*/

/*1. Char conversion - %c - prints a single character*/
void	putchar(char c, int *i)
{
	*i += write(1, &c, 1);
}

/*2. String conversion - %s - Prints a string
(as defined by the common C convention)*/
void	putstr(char *str, int *i)
{
	while (*str)
	{
		*i += write(1, str, 1);
		str++;
	}
}

/*3. Number conversion - %d - Prints a decimal (base 10) number
%i - Prints an integer in base 10
Without modifiers, they are basically the same*/

void	putnbr(long long int nbr, int *i)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		*i += write(1, "-", 1);
	}
	if (nbr >= 10)
	{
		putnbr(nbr / 10, i);
		putnbr(nbr % 10, i);
	}
	else
	{
		nbr += 48;
		*i = write(1, &nbr, 1);
	}
}
