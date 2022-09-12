/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:44:58 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/07 19:48:29 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*b;
	int	*d;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	d = (b = malloc(range * sizeof(int)));
	if (!d)
		return (0);
	while (i < range)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
