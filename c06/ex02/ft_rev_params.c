/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:29:00 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/25 22:41:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write (1, str, i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc > 0)
	{
		while (i > 0)
		{
			ft_putstr(argv[i]);
			write (1, "\n", 1);
			i--;
		}
	}
}
