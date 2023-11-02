/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:59:05 by joakoeni          #+#    #+#             */
/*   Updated: 2023/05/24 13:59:10 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}