/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:52:04 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/07 19:55:39 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	max_len(char **strs, int size)
{
	int	i;
	int	j;
	int	fl;

	i = 0;
	fl = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			fl++;
		}
		i++;
	}
	return (fl);
}

int	st_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2, int *x)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[*x] = s2[i];
		i++;
		*x += 1;
	}
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		max_l;
	int		lsep;
	int		j;

	if (size == 0)
		return ((char*) malloc(sizeof(char)));
	max_l = max_len(strs, size);
	lsep = st_len(sep);
	max_l = (lsep * (size - 1)) + max_l;
	str = (char *)malloc((max_l + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		str = ft_strcpy(str, strs[i], &j);
		if (i != (size - 1))
			str = ft_strcpy(str, sep, &j);
		i++;
	}
	str[j] = '\0';
	return (str);
}
