/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptoshiko <ptoshiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:20:01 by ptoshiko          #+#    #+#             */
/*   Updated: 2022/06/19 22:33:05 by ptoshiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	free_map(t_elem **map, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
