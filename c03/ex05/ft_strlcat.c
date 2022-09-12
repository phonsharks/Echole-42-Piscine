/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:10:39 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/01 09:34:31 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	dl = 0;
	j = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	j = dl;
	if (size == 0 || size <= dl)
	{
		return (sl + size);
	}
	while (src[i] != '\0' && i < size - dl - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dl + sl);
}
/*
int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%u \n", ft_strlcat(dest, src,19));
	printf("%s \n", dest);
}
*/
