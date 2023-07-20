/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:30:01 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/26 00:29:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int count;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'A')
		{
			count++;
		}
	i++;
	}
	return (count);
}

#include<stdio.h>

int		main(void)
{
	char *str;

	str = "AbcdA";
	printf("%d\n", ft_countchar(str));
}
