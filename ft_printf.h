/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:58:38 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/06/27 22:41:01 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

size_t	ft_strlen(const char *str);
void	ft_putchar(char c, int *i);
void	ft_putstr(char *str, int *i);
void	ft_putnbr(long long int nbr, int *i);
void	ft_putnbr_unsigned(unsigned int nbr, int *i);
void	ft_puthexa_low(unsigned int nbr, int *i);
void	ft_puthexa_up(unsigned int nbr, int *i);
void	ft_putadress(unsigned long nbr, int *i);
void	format_checker(char format, va_list *args, int *len);
int		ft_printf(const char *toprint, ...);

#endif
