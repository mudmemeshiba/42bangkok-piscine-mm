/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pputrasr <pputrasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:27:54 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/25 15:01:23 by pputrasr         ###   ########.fr       */
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

	i = 0;
	if (argc == 1)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
}
