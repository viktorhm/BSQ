/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:16:56 by tlerebou          #+#    #+#             */
/*   Updated: 2023/07/26 10:59:44 by tlerebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<fcntl.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

typedef struct t_donnees
{
	char	vide;
	char	plein;
	char	obstacle;
	int		ligne;
	int		colonne;
	int		tab_ligne;
	int		size_carre;
	int		tab_colonne;
}t_donnees;

typedef struct t_car
{
	char	vide;
	char	plein;
	char	obstacle;
}t_car;

typedef struct t_buffer
{
	t_car	car;
	t_car	*pcar;
	char	**tab;
	char	*buffp;
	int		fd;
	int		indice;
	int		nb_ligne;
	int		nb_colonne;
	int		taille_buffer;
}t_buffer;

void	ft_closefile(int fd);
void	ft_affichage(char **tab, int ligne);
void	ft_ajout_carre(char **tab, t_donnees g);
void	ft_cherche_carre(char **tab, int nb_ligne, int nb_colonne, t_car car);
int		ft_nombre(char *str);
int		ft_total(char dossier[]);
int		ft_test_character(t_car car);
int		ft_test_carre(char **tab, t_donnees g);
int		ft_test_taille(char **tab, t_donnees *g);
int		ft_convert_char(char *buffp, t_car *car);
int		ft_convert_firstline(char *buffp, t_car *car);
int		ft_recherche_colonne(char *buffp, int nb_ligne);
int		ft_readfile(int taille_beffer, char *buffp, char *path);
int		ft_convert_tab(char **tab, char *buffp, int nb_ligne, t_car car);
int		ft_test_ligne(char *buffp, int ligne, int indice_buff, int nb_colonne);

#endif
