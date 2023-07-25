/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:01:44 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/24 21:33:57 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_readfile(int taille_beffer, char *buffp, char *path)
{
	int	fd;
	int	size;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (fd);
	}
	size = read(fd, buffp, taille_beffer);
	if (size == -1)
		return(-1);
	return (size);
}
