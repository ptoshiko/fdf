/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptoshiko <ptoshiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:13:14 by ptoshiko          #+#    #+#             */
/*   Updated: 2022/06/03 16:45:39 by ptoshiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>
# define BUFFER_SIZE 100

typedef struct s_elem
{
	int color;
	int value;
}	t_elem;

typedef struct s_map
{
	int		width;
	int		height;
	t_elem	**map;
	int		zoom;
	void	*mlx_ptr;
	void	*win_ptr;
}	t_map;

size_t	ft_strlen(const char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int		ft_ind_n(char *arr);
int		ft_atoi(const char *str);
char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	read_file(char *file, t_map *map);
void	bresenham(float x0, float y0, float x1, float y1, t_map *map);
void	draw(t_map *map);

#endif