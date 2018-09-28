/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:56:43 by frrobert          #+#    #+#             */
/*   Updated: 2018/09/28 08:01:40 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	char *strt;
	
	strt = "tata yoyo";
	ft_putstr(strt);
	return (0);
}

void	ft_putchar(char c)
{
	write(1,&c,1);
}

/*void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}*/
