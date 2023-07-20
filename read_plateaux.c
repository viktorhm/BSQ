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
#include <fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void *readfile (int taille_beffer)
{
	int fd;
	char path[] ="example_file" ;
	char *buff[taille_beffer];
	int n = 0 ;

	fd = open(path,O_RDONLY);
	n = read(fd,buff,taille_beffer);
	printf("%s\n",buff[0]);
	printf("%d",n);
	


}

int convert(char buff)
{
printf("%d",buff[0]);
}

int main (void)
{
char test ;
readfile(300);
convert();
printf("%d",buff);

return 0 ;
}
