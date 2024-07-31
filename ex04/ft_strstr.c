/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:01:28 by liulm             #+#    #+#             */
/*   Updated: 2024/07/31 13:56:24 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// ----------------------------------------------------

#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "Salut comment ca va?";
	char	to_find[] = "mment";
	char	str2[] = "Salut comment ca va?";
	char	to_find2[] = "mment";
	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str2, to_find2));
}
