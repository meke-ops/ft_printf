/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meke < meke@student.42istanbul.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:40:10 by meke              #+#    #+#             */
/*   Updated: 2024/11/12 07:17:36 by meke             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	putnbr_b(t_ull n, int base, const char *digits)
{
	int	count;

	count = 0;
	if (n >= (t_ull)base)
		count += putnbr_b(n / base, base, digits);
	count += ft_putchar(digits[n % base]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + putnbr_b((t_ull)ptr, 16, "0123456789abcdef"));
}

int	ft_putnbr(intmax_t n, int base, const char *digits)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		return (count + putnbr_b(-n, base, digits));
	}
	return (count + putnbr_b(n, base, digits));
}
