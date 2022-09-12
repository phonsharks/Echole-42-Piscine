/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:18:06 by nekahram          #+#    #+#             */
/*   Updated: 2022/07/27 15:19:57 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
