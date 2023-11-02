/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:08:28 by joakoeni          #+#    #+#             */
/*   Updated: 2023/05/24 14:10:13 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*start;
	char	*end;
	char	c;

	if (s)
	{
		start = s;
		end = s + (ft_strlen(s) - 1);
		while (start < end)
		{
			c = *start;
			*start++ = *end;
			*end-- = c;
		}
	}
	return (s);
}
