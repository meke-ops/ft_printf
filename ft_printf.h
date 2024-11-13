/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meke < meke@student.42istanbul.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:43:05 by meke              #+#    #+#             */
/*   Updated: 2024/11/12 07:17:33 by meke             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

typedef unsigned long long	t_ull;

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	putnbr_b(t_ull n, int base, const char *digits);
int	ft_putptr(void *ptr);
int	ft_putnbr(intmax_t n, int base, const char *digits);

#endif
