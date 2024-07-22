/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:30:02 by liulm             #+#    #+#             */
/*   Updated: 2024/07/21 15:27:47 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// ------------------------------------------

#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "Salut";
	char	s2[] = "Salyt";
	int		i;
	int		j;

	i = ft_strcmp(s1, s2);
	j = strcmp(s1, s2);
	printf("ft_strcmp : %d\n", i);
	printf("strcmp : %d", j);
}
