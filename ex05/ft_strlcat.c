/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:09:44 by liulm             #+#    #+#             */
/*   Updated: 2024/07/22 14:54:21 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	if (lendest >= size)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + ft_strlen(src));
}

// ------------------------------------------------------

#include <stdio.h>

int	main()
{
	char	src[] = "ca va?";
	char	dest[] = "Salut comment ";
	printf("%d", ft_strlcat(dest, src, 10));
	return (0);
}

