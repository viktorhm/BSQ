/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carre.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:46:22 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/20 21:00:36 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_ajout_carre(char **tab, s_donnees g)
{
	int	indice_ligne;
	int	indice_colonne;

	indice_ligne = g.ligne;
	while (indice_ligne < (g.ligne + g.size_carre))
	{
		indice_colonne = g.colonne;
		while (indice_colonne < (g.colonne + g.size_carre))
		{
			tab[indice_ligne][indice_colonne] = '#';
			indice_colonne += 1;
		}
		indice_ligne += 1;
	}
}

int	ft_test_carre(char **tab, s_donnees g)
{
	int	indice_ligne;
	int	indice_colonne;

	indice_ligne = g.ligne;
	while (indice_ligne < (g.size_carre + g.colonne))
	{
		indice_colonne = g.colonne;
		while (indice_colonne < (g.size_carre + g.colonne))
		{
			if (tab[indice_ligne][indice_colonne] == '0')
			{
				return (0);
			}
			indice_colonne += 1;
		}
		indice_ligne += 1;
	}
	return (1);
}

int	ft_test_taille(char **tab, s_donnees *g)
{
	(*g).ligne = 0;
	while (((*g).ligne + (*g).size_carre) <= (*g).size_tab)
	{
		(*g).colonne = 0;
		while (((*g).colonne + (*g).size_carre) <= (*g).size_tab)
		{
			if (ft_test_carre(tab, *g) == 1)
			{
				return (1);
			}
			(*g).colonne += 1;
		}
		(*g).ligne += 1;
	}
	return (0);
}

void	ft_cherche_carre(char **tab, int size_tab)
{
	s_donnees	g;
	s_donnees	*p_g;

	p_g = &g;
	g.ligne = 0;
	g.colonne = 0;
	g.size_tab = size_tab;
	g.size_carre = size_tab;
	while (ft_test_taille(tab, p_g) == 0)
	{
		g.size_carre -= 1;
	}
	ft_ajout_carre(tab, g);
	ft_affichage(tab, size_tab);
}
