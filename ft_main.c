/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:27:37 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/25 14:49:43 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	int	indice;
	int	error;

	indice = 1;
	while (argc > indice)
	{
		error = ft_total(argv[indice]);
		indice += 1;
		if (error != 0)
			write(1, "map error", 9);
		if (argc > indice)
		{
			write(1, "\n", 1);
		}
	}
	return (0);
}
