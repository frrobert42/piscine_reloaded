/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:10:14 by frrobert          #+#    #+#             */
/*   Updated: 2018/09/24 11:16:37 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_numbers();
	return(0);
}

void	ft_putchar(char c)
{
	write(1,&c,1);	
}
