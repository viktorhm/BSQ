/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:31:24 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/20 17:37:56 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int fonction(int *a)
{
int *a=10 ; 
}

int main(void)
{
int a = 0 ;
fonction(&a);
printf("%d",a);

return 0 ; 
}