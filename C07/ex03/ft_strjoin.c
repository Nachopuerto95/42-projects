/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:09:04 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/27 14:11:18 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*tab;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size -1);
	tab = (char *)malloc(sizeof(char) *(total_len + 1));
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (sep && i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

#include <stdio.h>

int main()
{
	char *strs[3] = {"Hola", "que", "tal"};
	char *sep = " ^ ";
	printf("%s\n", ft_strjoin(3, strs, sep));
	return 0;
}
