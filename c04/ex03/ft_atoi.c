/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:36:04 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/01 10:05:08 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			j *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		k = (str[i] - 48) + (k * 10);
		i++;
	}
	return (k * j);
}
/*
int		main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));

}
*/
