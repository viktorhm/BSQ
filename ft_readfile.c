/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:01:44 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/25 13:34:26 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_readfile(int taille_beffer, char *buffp, char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (fd);
	}
	read(fd, buffp, taille_beffer);
	return (fd);
}

void	ft_closefile(int fd)
{
	if (close(fd) < 0)
	{
		exit(1);
	}
}
