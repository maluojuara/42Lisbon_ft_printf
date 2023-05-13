/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:48:32 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/13 16:53:55 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_putchar(char c, int *i);
void	ft_putstr(char *str, int *i);
void	ft_putnbr(long long int nbr, int *i);
void	ft_putnbr_unsigned(unsigned long nbr, int *i);
void	ft_puthexa_low(unsigned long nbr, int *i);
void	ft_puthexa_up(unsigned long nbr, int *i);
void	ft_putadress(unsigned long nbr, int *i);
void	format_checker(char format, va_list *args, int *len);
int		ft_printf(const char *toprint, ...);


#endif
