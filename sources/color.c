/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:09:26 by joakoeni          #+#    #+#             */
/*   Updated: 2023/05/24 15:32:53 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "color.h"

//Get color from default define in color.h. Color depends on "altitude"

int	get_default_color(int z, t_map *map)
{
	double	percentage;

	percentage = percent(map->z_min, map->z_max, z);
	if (percentage < 0.2)
		return (COLOR_BLUE);
	else if (percentage < 0.4)
		return (COLOR_GREEN);
	else if (percentage < 0.6)
		return (COLOR_BROWN);
	else if (percentage < 0.8)
		return (COLOR_GREY);
	else
		return (COLOR_WHITE);
}

//Get light for color. Result depends on point position.
//This function works to create linear gradient.

int	get_light(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}

//Get color. Result depends on point position.
//This function works to create linear gradient.

int	get_color(t_point current, t_point start, t_point end, t_point delta)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (current.color == end.color)
		return (current.color);
	if (delta.x > delta.y)
		percentage = percent(start.x, end.x, current.x);
	else
		percentage = percent(start.y, end.y, current.y);
	red = get_light((start.color >> 16) & 0xFF,
					(end.color >> 16) & 0xFF,
					percentage);
	green = get_light((start.color >> 8) & 0xFF,
					(end.color >> 8) & 0xFF,
					percentage);
	blue = get_light(start.color & 0xFF,
					end.color & 0xFF,
					percentage);
	return ((red << 16) | (green << 8) | blue);
}
