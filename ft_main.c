/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:56:30 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/20 21:01:31 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	int		indice1;
	int		indice2;
	int		size;
	int		taux;
	char	**tab;

	indice1 = 0;
	indice2 = 0;
	if (argc > 1)
	{
		size = ft_nombre(argv[1]);
		taux = ft_nombre(argv[2]);
	}
	else
	{
		size = 5;
	}
	tab = malloc(size * sizeof(tab));
	while (indice1 < size)
	{
		tab[indice1] = malloc((size + 1) * sizeof(char));
		while (indice2 < size)
		{
			if (rand() % 100 < taux)
			{
				tab[indice1][indice2] = '0';
			}
			else
			{
				tab[indice1][indice2] = '.';
			}
			indice2 += 1;
		}
		tab[indice1][indice2] = '\0';
		indice2 = 0;
		indice1 += 1;
	}
	ft_affichage(tab, size);
	write(1, "\n", 1);
	write(1, "__________________________________________________", 50);
	write(1, "\n", 1);
	ft_cherche_carre(tab, size);
	free(tab);
}
