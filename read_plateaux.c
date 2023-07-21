/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_plateaux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:04:10 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/20 13:34:25 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
//char *readfistline(void);

char *readfile (int *pn ,int taille_beffer , char *buffp )
{
	int fd;
	char path[] ="example_file" ;
	fd = open(path,O_RDONLY);
	*pn = read(fd,buffp,taille_beffer);
}


int convert_fistline(char *buffp , char **tab_setting )
{
int i = 0 ;


	while(buffp[i] != 10)
	{
		
		if(buffp[i] == 10)
			{
			tab_setting[3][0] = buffp[i - 1];
			tab_setting[2][0] = buffp[i - 2];
			tab_setting[1][0] = buffp[i - 3];
			}
	
			
		i++;
			
	}
	i = i - 3;
	int j = 0;
	while(i > j)
		{
		j++;
		tab_setting[0][j] = buffp[j];
		printf("%d->",tab_setting[0][j]);
		printf("%d ",buffp[j]);
		}
	}


int main (void)
{
	int n =0 ;
	int *pn = &n ;

	int taille_beffer = 100 ;

	char buff[taille_beffer];
	char *buffp = buff;

	char **tab_setting;
	tab_setting= malloc(sizeof(tab_setting)*4);
	tab_setting[0] = malloc(sizeof(char) * 300 );

	readfile(pn,taille_beffer,buffp);
	convert_fistline(buffp, tab_setting);
	convert_tab()
	


return 0 ;
}
