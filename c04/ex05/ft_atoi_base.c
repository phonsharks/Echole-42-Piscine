/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:36:10 by nekahram          #+#    #+#             */
/*   Updated: 2022/07/31 16:57:41 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1,&a,1);
}

int	len(char *str)
{
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	err(char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 1;
	i = 0;
	if (len == 1 || str[0] == '\0')
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		if (str[i]<=32 || str[i] == 127)
		{
			return (0);
		}
		else if (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
			{
				j *= -1;
			}
			i++;
		}
		j = i + 1;
		while (j < a)
		{
			if (str[i] = str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		k = (str[i] - 48) + (k * 10);
		i++;	
	}
	return(k*j);
}
int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
