/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pputrasr <pputrasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:19:41 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/23 10:10:39 by pputrasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb >= 1 && nb < 13)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
