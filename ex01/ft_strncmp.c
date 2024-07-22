/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:36:14 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 15:26:43 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// ----------------------------------------------------

#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "Salut Salut";
	char	s2[] = "Salut S4lut";
	int		i;
	int		j;

	i = ft_strncmp(s1, s2, 8);
	j = strncmp(s1, s2, 8);
	printf("ft_strncmp : %d\n", i);
	printf("strncmp : %d", j);
}
