/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:19:41 by joakoeni          #+#    #+#             */
/*   Updated: 2023/07/06 11:19:43 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *a)
{
	int	i;

	i = 0;
	if (!a)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (i);
}
