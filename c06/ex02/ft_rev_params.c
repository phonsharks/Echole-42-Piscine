/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekahram <nekahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:53:54 by nekahram          #+#    #+#             */
/*   Updated: 2022/08/04 22:08:40 by nekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = argc - 1;
		while (s > 0)
		{
			c = 0;
			while (argv[s][c])
			{
				ft_putchar(argv[s][c]);
				c++;
			}
			ft_putchar('\n');
			s--;
		}
	}
	return (0);
}
