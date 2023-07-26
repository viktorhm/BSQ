/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:04:10 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/26 10:55:20 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_recherche_colonne(char *buffp, int nb_ligne)
{
	int	ligne;
	int	indice_buff;
	int	nb_colonne;

	ligne = 0;
	nb_colonne = 0;
	indice_buff = 0;
	while ((ligne != nb_ligne) && (nb_colonne != -1))
	{
		nb_colonne = ft_test_ligne(buffp, ligne, indice_buff, nb_colonne);
		indice_buff += nb_colonne + 1;
		ligne += 1;
	}
	indice_buff += 1;
	if (buffp[indice_buff] != '\0')
	{
		return (-1);
	}
	return (nb_colonne);
}

int	ft_test_ligne(char *buffp, int ligne, int indice_buff, int nb_colonne)
{
	int	nb_colonne_test;

	nb_colonne_test = 0;
	while (buffp[indice_buff] != '\n')
	{
		indice_buff += 1;
		nb_colonne_test += 1;
	}
	if (nb_colonne != nb_colonne_test && ligne > 1)
	{
		return (-1);
	}
	return (nb_colonne_test);
}

int	ft_convert_firstline(char *buffp, t_car *car)
{
	int	indice;
	int	multi;
	int	result;

	indice = ft_convert_char(buffp, car);
	if (indice == -1)
		return (-1);
	multi = 1;
	result = 0;
	indice -= 3;
	while (indice != 0)
	{
		if (buffp[indice] >= '0' || buffp[indice] <= '9')
		{
			indice -= 1;
			result += (buffp[indice] - '0') * multi;
			multi *= 10;
		}
		else
			return (-1);
	}
	if (result == 0)
		return (-1);
	return (result);
}

int	ft_convert_char(char *buffp, t_car *car)
{
	int	indice;

	indice = 0;
	if (buffp[0] == ' ')
	{
		return (-1);
	}
	while (buffp[indice] != '\n')
	{
		if (buffp[indice + 1] == '\n')
		{
			(*car).plein = buffp[indice];
			(*car).obstacle = buffp[indice - 1];
			(*car).vide = buffp[indice - 2];
		}
		indice += 1;
	}
	if (ft_test_character(*car) == -1)
	{
		return (-1);
	}
	return (indice);
}

int	ft_convert_tab(char **tab, char *buffp, int nb_ligne, t_car car)
{
	int	i_ligne;
	int	i_colonne;
	int	i_buff;

	i_ligne = 0;
	i_buff = 0;
	while (buffp[i_buff] != '\n')
		i_buff += 1;
	while (i_ligne != nb_ligne)
	{
		i_colonne = 0;
		i_buff += 1;
		while (buffp[i_buff] != '\n')
		{
			if ((buffp[i_buff] == car.vide) || (buffp[i_buff] == car.obstacle))
				tab[i_ligne][i_colonne] = buffp[i_buff];
			else if (i_ligne > 0)
				return (-1);
			i_colonne += 1;
			i_buff += 1;
		}
		tab[i_ligne][i_colonne] = '\0';
		i_ligne += 1;
	}
	return (0);
}
