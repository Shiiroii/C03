/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:01:28 by liulm             #+#    #+#             */
/*   Updated: 2024/07/23 12:24:46 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = -1;
	while (str[i])
	{
		len++;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[len]);
			}
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
	char	to_find[] = "o";
	char	str2[] = "Salut comment ca va?";
	char	to_find2[] = "o";
	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str2, to_find2));
}
