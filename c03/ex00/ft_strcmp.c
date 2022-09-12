/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:55:07 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/01 09:12:12 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int    main()
{
    printf("%d", ft_strcmp("Hello", "Hello1"));
    printf("\n%d", ft_strcmp("Hello", "He"));
    printf("\n%d", ft_strcmp("He", "Hello"));
    printf("\n%d", ft_strcmp("Hello", "Hello"));
}
*/
