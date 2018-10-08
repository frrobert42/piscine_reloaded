/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towelie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:08:51 by towelie           #+#    #+#             */
/*   Updated: 2018/10/04 09:30:16 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int result;

	result = ft_strlen(s1) - ft_strlen(s2);
	return (result);
}

int	main(void)
{
	char *s1;
	char *s2;
	int  strcmp;

	s1 = "0123456789";
	s2 = "12";
	strcmp = ft_strcmp(s1, s2);
	printf("%d",strcmp);
	return (0);
}
