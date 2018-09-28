/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:36:49 by frrobert          #+#    #+#             */
/*   Updated: 2018/09/28 08:05:47 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char *strtest;

	strtest = "123456789";
	ft_strlen(strtest);
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		{
			i++;
		}
	printf("%d", i);
	return (i);
}
