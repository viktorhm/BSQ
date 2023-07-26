/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:36:34 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/26 10:59:10 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_affichage(char **tab, int ligne)
{
	int	indice_ligne;
	int	indice_str;

	indice_ligne = 0;
	indice_str = 0;
	while (indice_ligne < ligne)
	{
		while (tab[indice_ligne][indice_str] != '\0')
		{
			write(1, &tab[indice_ligne][indice_str], 1);
			indice_str += 1;
		}
		indice_ligne += 1;
		indice_str = 0;
		if (indice_ligne < ligne)
		{
			write(1, "\n", 1);
		}
	}
}

int	ft_nombre(char *str)
{
	int	indice;
	int	nombre;

	indice = 0;
	nombre = 0;
	while (str[indice] != 0)
	{
		nombre = nombre * 10 + (str[indice] - '0');
		indice += 1;
	}
	return (nombre);
}

int	ft_test_character(t_car car)
{
	if (car.plein == car.obstacle)
	{
		return (-1);
	}
	if (car.plein == car.vide)
	{
		return (-1);
	}
	if (car.obstacle == car.vide)
	{
		return (-1);
	}
	return (0);
}
