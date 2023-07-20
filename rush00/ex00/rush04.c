/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pputrasr <pputrasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:34:22 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/07 15:32:20 by pputrasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	t;
	int	n;

	t = 1;
	while (t <= y)
	{
		n = 1;
		while (n <= x)
		{
			if ((t == y && n == x) && (y != 1) && (n != 1))
				ft_putchar('A');
			else if (t == 1 && n == 1)
				ft_putchar('A');
			else if (((t == 1 && n == x)) || (t == y && n == 1))
				ft_putchar('C');
			else if ((t == 1 || t == y) || (n == 1 || n == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			n++;
		}
		ft_putchar('\n');
		t++;
	}
}
