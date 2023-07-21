/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:16:56 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/21 08:36:15 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<unistd.h>
# include<stdlib.h>

typedef struct t_donnees
{
	int	ligne;
	int	colonne;
	int	size_carre;
	int	size_tab;
}t_donnees;

void	ft_affichage(char **tab, int len);
void	ft_ajout_carre(char **tab, s_donnees g);
void	ft_cherche_carre(char **tab, int size_tab);
int		ft_nombre(char *str);
int		ft_test_carre(char **tab, s_donnees g);
int		ft_test_taille(char **tab, s_donnees *g);

#endif
