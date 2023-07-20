/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pputrasr <pputrasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:21:56 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/24 10:48:50 by pputrasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i <= nb / (i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(101));
}
