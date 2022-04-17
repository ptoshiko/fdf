/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptoshiko <ptoshiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:18:15 by ptoshiko          #+#    #+#             */
/*   Updated: 2022/04/17 22:33:40 by ptoshiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_map	*map;
	int i;
	int j;
	
	i = 0;
	map = (t_map *)malloc(sizeof(t_map));
	read_file("10-2.fdf", map);
	printf("%d\n", map->height);
	printf("%d\n", map->width);
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
			printf("%d ", map->values[i][j++]);
		i++;
		printf("\n");
	}
}