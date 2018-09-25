/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:37:25 by frrobert          #+#    #+#             */
/*   Updated: 2018/09/25 21:51:30 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	else if ((nb < 0) || (nb > 12))
		return (0);
	while ( i < nb)
	{
		result = result * i;
		i++;
	}
	return (result)
}
