/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:53:43 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/13 17:54:00 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

/*1. Char conversion - %c - prints a single character*/
void	ft_putchar(char c, int *i)
{
	*i += write(1, &c, 1);
}

/*2. String conversion - %s - Prints a string
(as defined by the common C convention)*/
void	ft_putstr(char *str, int *i)
{
	while (*str)
	{
		*i += write(1, str, 1);
		str++;
	}
}
