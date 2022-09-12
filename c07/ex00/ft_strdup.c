/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:39:56 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/07 19:43:58 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	if ((dest = (char *)malloc(ft_strlen(src) * sizeof (char) + 1)) == NULL)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	*str;
	char	*allocated;

	printf("base:%s %p\n", str, str);
	allocated = strdup(str);
	printf("base:%s %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("base:%s %p\n", allocated, allocated);
}
*/
