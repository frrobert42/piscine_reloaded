/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: towelie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 11:17:40 by towelie           #+#    #+#             */
/*   Updated: 2018/09/25 11:25:56 by towelie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
