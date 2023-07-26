/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_total.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:21:43 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/26 11:00:17 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_total(char dossier[])
{
	t_buffer	b;

	b.indice = 0;
	b.taille_buffer = 5000000;
	b.buffp = malloc(sizeof(char) * 5000000);
	b.pcar = &b.car;
	b.fd = ft_readfile(b.taille_buffer, b.buffp, dossier);
	if (b.fd == -1)
		return (-1);
	b.nb_ligne = ft_convert_firstline(b.buffp, b.pcar);
	if (b.nb_ligne == -1)
		return (-2);
	b.nb_colonne = ft_recherche_colonne(b.buffp, b.nb_ligne + 1);
	if (b.nb_colonne == -1)
		return (-3);
	b.tab = malloc(sizeof(b.tab) * b.nb_ligne);
	while (b.indice < b.nb_ligne)
		b.tab[b.indice++] = malloc(sizeof(char) * (b.nb_colonne + 1));
	if (ft_convert_tab(b.tab, b.buffp, b.nb_ligne, b.car) == -1)
		return (-4);
	ft_cherche_carre(b.tab, b.nb_ligne, b.nb_colonne, b.car);
	free(b.tab);
	ft_closefile(b.fd);
	return (0);
}
