/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carre.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:46:22 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/24 16:41:10 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_ajout_carre(char **tab, t_donnees g)
{
	int	indice_ligne;
	int	indice_colonne;

	indice_ligne = g.ligne;
	while (indice_ligne < (g.ligne + g.size_carre))
	{
		indice_colonne = g.colonne;
		while (indice_colonne < (g.colonne + g.size_carre))
		{
			tab[indice_ligne][indice_colonne] = g.plein;
			indice_colonne += 1;
		}
		indice_ligne += 1;
	}
}

int	ft_test_carre(char **tab, t_donnees g)
{
	int	indice_ligne;
	int	indice_colonne;
	int	cpt;

	cpt = 0;
	indice_ligne = g.ligne;
	while (indice_ligne < (g.size_carre + g.ligne))
	{
		indice_colonne = g.colonne;
		while (indice_colonne < (g.size_carre + g.colonne))
		{
			if (tab[indice_ligne][indice_colonne] == g.obstacle)
			{
				return (0);
			}
			cpt += 1;
			indice_colonne += 1;
		}
		indice_ligne += 1;
	}
	return (1);
}

int	ft_test_taille(char **tab, t_donnees *g)
{
	(*g).ligne = 0;
	while (((*g).ligne + (*g).size_carre) <= (*g).tab_ligne)
	{
		(*g).colonne = 0;
		while (((*g).colonne + (*g).size_carre) <= (*g).tab_colonne)
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

void	ft_cherche_carre(char **tab, int nb_ligne, int nb_colonne, t_car car)
{
	t_donnees	g;
	t_donnees	*p_g;

	p_g = &g;
	g.ligne = 0;
	g.colonne = 0;
	g.tab_ligne = nb_ligne;
	g.tab_colonne = nb_colonne;
	g.vide = car.vide;
	g.obstacle = car.obstacle;
	g.plein = car.plein;
	if (nb_ligne < nb_colonne)
	{
		g.size_carre = nb_ligne;
	}
	else
	{
		g.size_carre = nb_colonne;
	}
	while (ft_test_taille(tab, p_g) == 0)
	{
		g.size_carre -= 1;
	}
	ft_ajout_carre(tab, g);
	ft_affichage(tab, nb_ligne);
}
