/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 11:17:25 by frrobert          #+#    #+#             */
/*   Updated: 2018/09/26 14:06:48 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int test1 = ft_sqrt(2147302923);
	printf("%d\n",test1);
	return (0);
}
int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0 && nb <= 2147302921)
	{
		while ( i < nb)
		{
			if (i * i == nb)
			{
				printf("Resultat : %i\n",i);
			    return (i);
			}
			i++;
		}
	}
	if (nb == 2147395600)
		return (46340);
	return (0);
}
