/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:42 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/17 15:58:33 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!str)
		str = "(null)";
	while (*str)
	{
		*i += write(1, str, 1);
		str++;
	}
}

/*helper function*/
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
