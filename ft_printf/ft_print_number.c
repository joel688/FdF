/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:20:08 by joakoeni          #+#    #+#             */
/*   Updated: 2023/07/06 11:20:10 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int a)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(a);
	len += ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printnumber(unsigned int a, char format)
{
	int		len;
	char	*num;

	len = 0;
	if (a == 0)
		return (ft_putchar('0'));
	if (format == 'X' || format == 'x')
	{
		ft_print_hex(a, format);
		return (ft_hex_len(a));
	}
	if (format == 'p')
		return (ft_print_ptr(a, format));
	else
	{
		num = ft_itoa(a);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
